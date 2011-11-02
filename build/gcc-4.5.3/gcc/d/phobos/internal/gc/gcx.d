/**
 * This module contains the garbage collector implementation.
 *
 * Copyright: Copyright (C) 2001-2007 Digital Mars, www.digitalmars.com.
 *            All rights reserved.
 * License:
 *  This software is provided 'as-is', without any express or implied
 *  warranty. In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 *
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, in both source and binary form, subject to the following
 *  restrictions:
 *
 *  o  The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 *  o  Altered source versions must be plainly marked as such, and must not
 *     be misrepresented as being the original software.
 *  o  This notice may not be removed or altered from any source
 *     distribution.
 * Authors:   Walter Bright, David Friedman, Sean Kelly
 */

// D Programming Language Garbage Collector implementation

/* NOTE: This file has been patched from the original DMD distribution to
   work with the GDC compiler.

   Modified by David Friedman, July 2006
   Updated by Iain Buclaw, January 2011
*/

/************** Debugging ***************************/

//debug = PRINTF;                       // turn on printf's
//debug = COLLECT_PRINTF;               // turn on printf's
//debug = THREADINVARIANT;      // check thread integrity
//debug = LOGGING;              // log allocations / frees
//debug = MEMSTOMP;             // stomp on memory
//debug = SENTINEL;             // add underrun/overrrun protection
//debug = PTRCHECK;             // more pointer checking
//debug = PTRCHECK2;            // thorough but slow pointer checking

/*************** Configuration *********************/

version = STACKGROWSDOWN;       // growing the stack means subtracting from the stack pointer
                                // (use for Intel X86 CPUs)
                                // else growing the stack means adding to the stack pointer
version = MULTI_THREADED;       // produce multithreaded version

/***************************************************/

private import gcbits;
private import gcstats;

private import cstdlib = std.c.stdlib : calloc, free, malloc, realloc;
private import cstring = std.c.string : memcpy, memmove, memset;

debug private import std.c.stdio;

import std.outofmemory;
import std.gc;

version (GNU)
{
    private import gcc.builtins;
}

version (Win32)
{
    import win32;
    import std.c.windows.windows;
}
else version (GNU)
{
    private import gcgcc;
}
else version (Posix)
{
    import gclinux;
}
else version (OSX)
{
        import std.c.osx.osx;
}


version (MULTI_THREADED)
{
    import std.thread;
}


private void onOutOfMemoryError()
{
    _d_OutOfMemory();
}

private void* rt_stackBottom()
{
    version (Win32)
    {
        return win32.os_query_stackBottom();
    }
    else version (GNU)
    {
        return gcgcc.os_query_stackBottom();
    }
    else version (Posix)
    {
        return gclinux.os_query_stackBottom();
    }
}

private bool thread_needLock()
{
    return std.thread.Thread.nthreads != 1;
}


alias GC gc_t;

/* ======================= Leak Detector =========================== */


debug (LOGGING)
{
    struct Log
    {
        void*  p;
        size_t size;
        uint   line;
        char*  file;
        void*  parent;

        void print()
        {
            printf("    p = %p, size = %d, parent = %p ", p, size, parent);
            if (file)
            {
                printf("%s(%u)", file, line);
            }
            printf("\n");
        }
    }


    struct LogArray
    {
        size_t allocdim;
        size_t dim;
        Log *data;

        void Dtor()
        {
            if (data)
                cstdlib.free(data);
            data = null;
        }

        void reserve(size_t nentries)
        {
            assert(dim <= allocdim);
            if (allocdim - dim < nentries)
            {
                allocdim = (dim + nentries) * 2;
                assert(dim + nentries <= allocdim);
                if (!data)
                {
                    data = cast(Log *)cstdlib.malloc(allocdim * Log.sizeof);
                    if (!data && allocdim)
                        onOutOfMemoryError();
                }
                else
                {   Log *newdata;

                    newdata = cast(Log *)cstdlib.malloc(allocdim * Log.sizeof);
                    if (!newdata && allocdim)
                        onOutOfMemoryError();
                    cstring.memcpy(newdata, data, dim * Log.sizeof);
                    cstdlib.free(data);
                    data = newdata;
                }
            }
        }


        void push(Log log)
        {
            //printf("%p.push(%p) dim = %d\n", this, log.p, cast(int)dim);
            reserve(1);
            data[dim++] = log;
        }

        void remove(size_t i)
        {
            //printf("%p.remove(%d)\n", this, cast(int)i);
            cstring.memmove(data + i, data + i + 1, (dim - i) * Log.sizeof);
            dim--;
        }


        size_t find(void *p)
        {
            //printf("%p.find(%p) dim = %d\n", this, p, cast(int)dim);
            for (size_t i = 0; i < dim; i++)
            {
                //printf("\tdata[%d] = %p\n", cast(int)i, data[i].p);
                if (data[i].p == p)
                    return i;
            }
            return ~cast(size_t)0;         // not found
        }


        void copy(LogArray *from)
        {
            reserve(from.dim - dim);
            assert(from.dim <= allocdim);
            cstring.memcpy(data, from.data, from.dim * Log.sizeof);
            dim = from.dim;
        }
    }
}


/* ============================ GC =============================== */


alias void (*GC_FINALIZER)(void *p, bool dummy);

class GCLock { }                // just a dummy so we can get a global lock


const uint GCVERSION = 1;       // increment every time we change interface
                                // to GC.

class GC
{
    // For passing to debug code
    static size_t line;
    static char*  file;

    uint gcversion = GCVERSION;

    Gcx *gcx;                   // implementation
    static ClassInfo gcLock;    // global lock


    void initialize()
    {
        gcLock = GCLock.classinfo;
        gcx = cast(Gcx *)cstdlib.calloc(1, Gcx.sizeof);
        if (!gcx)
            onOutOfMemoryError();
        gcx.initialize();
        setStackBottom(rt_stackBottom());
    }


    void Dtor()
    {
        version (Posix)
        {
            //debug(PRINTF) printf("Thread %x ", pthread_self());
            //debug(PRINTF) printf("GC.Dtor()\n");
        }

        if (gcx)
        {
            gcx.Dtor();
            cstdlib.free(gcx);
            gcx = null;
        }
    }


    invariant()
    {
        if (gcx)
        {
            gcx.thread_Invariant();
        }
    }


    /**
     *
     */
    void enable()
    {
        if (!thread_needLock())
        {
            assert(gcx.disabled > 0);
            gcx.disabled--;
        }
        else synchronized (gcLock)
        {
            assert(gcx.disabled > 0);
            gcx.disabled--;
        }
    }


    /**
     *
     */
    void disable()
    {
        if (!thread_needLock())
        {
            gcx.disabled++;
        }
        else synchronized (gcLock)
        {
            gcx.disabled++;
        }
    }


    /**
     *
     */
    void *malloc(size_t size)
    {
        if (!size)
        {
            return null;
        }

        if (!thread_needLock())
        {
            return mallocNoSync(size);
        }
        else synchronized (gcLock)
        {
            return mallocNoSync(size);
        }
    }


    //
    //
    //
    private void *mallocNoSync(size_t size)
    {
        assert(size != 0);

        void *p = null;
        Bins bin;

        //debug(PRINTF) printf("GC::mallocNoSync(size = %d, gcx = %p)\n", size, gcx);
        assert(gcx);
        //debug(PRINTF) printf("gcx.self = %x, pthread_self() = %x\n", gcx.self, pthread_self());

        if (gcx.running)
            onOutOfMemoryError();

        size += SENTINEL_EXTRA;

        // Compute size bin
        // Cache previous binsize lookup - Dave Fladebo.
        static size_t lastsize = -1;
        static Bins lastbin;
        if (size == lastsize)
            bin = lastbin;
        else
        {
            bin = gcx.findBin(size);
            lastsize = size;
            lastbin = bin;
        }

        if (bin < B_PAGE)
        {
            p = gcx.bucket[bin];
            if (p == null)
            {
                if (!gcx.allocPage(bin) && !gcx.disabled)       // try to find a new page
                {
                    if (!thread_needLock())
                    {
                        /* Then we haven't locked it yet. Be sure
                         * and lock for a collection, since a finalizer
                         * may start a new thread.
                         */
                        synchronized (gcLock)
                        {
                            gcx.fullcollectshell();
                        }
                    }
                    else if (!gcx.fullcollectshell())   // collect to find a new page
                    {
                        //gcx.newPool(1);
                    }
                }
                if (!gcx.bucket[bin] && !gcx.allocPage(bin))
                {   int result;

                    gcx.newPool(1);             // allocate new pool to find a new page
                    result = gcx.allocPage(bin);
                    if (!result)
                        return null;
                }
                p = gcx.bucket[bin];
            }

            // Return next item from free list
            gcx.bucket[bin] = (cast(List *)p).next;
            cstring.memset(p + size, 0, binsize[bin] - size);
            //debug(PRINTF) printf("\tmalloc => %p\n", p);
            debug (MEMSTOMP) cstring.memset(p, 0xF0, size);
        }
        else
        {
            p = gcx.bigAlloc(size);
            if (!p)
                return null;
        }
        size -= SENTINEL_EXTRA;
        p = sentinel_add(p);
        sentinel_init(p, size);
        gcx.log_malloc(p, size);
        return p;
    }


    /**
     *
     */
    void *calloc(size_t size, size_t n)
    {
        size_t len = size * n;

        if (!len)
        {
            return null;
        }

        if (!thread_needLock())
        {
            return callocNoSync(len);
        }
        else synchronized (gcLock)
        {
            return callocNoSync(len);
        }
    }


    //
    //
    //
    private void *callocNoSync(size_t size)
    {
        assert(size != 0);

        void *p = mallocNoSync(size);
        if (p)
        {   //debug(PRINTF) printf("calloc: %p len %d\n", p, len);
            cstring.memset(p, 0, size);
        }
        return p;
    }


    /**
     *
     */
    void *realloc(void *p, size_t size)
    {
        if (!thread_needLock())
        {
            return reallocNoSync(p, size);
        }
        else synchronized (gcLock)
        {
            return reallocNoSync(p, size);
        }
    }


    //
    //
    //
    private void *reallocNoSync(void *p, size_t size)
    {
        if (gcx.running)
            onOutOfMemoryError();

        if (!size)
        {   if (p)
            {   freeNoSync(p);
                p = null;
            }
        }
        else if (!p)
        {
            p = mallocNoSync(size);
        }
        else
        {   void *p2;
            size_t psize;

            //debug(PRINTF) printf("GC::realloc(p = %p, size = %u)\n", p, size);
            version (SENTINEL)
            {
                sentinel_Invariant(p);
                psize = *sentinel_size(p);
                if (psize != size)
                {
                    p2 = mallocNoSync(size);
                    if (psize < size)
                        size = psize;
                    //debug(PRINTF) printf("\tcopying %d bytes\n",size);
                    cstring.memcpy(p2, p, size);
                    p = p2;
                }
            }
            else
            {
                psize = gcx.findSize(p);        // find allocated size
                if (psize >= PAGESIZE && size >= PAGESIZE)
                {
                    auto psz = psize / PAGESIZE;
                    auto newsz = (size + PAGESIZE - 1) / PAGESIZE;
                    if (newsz == psz)
                        return p;

                    auto pool = gcx.findPool(p);
                    auto pagenum = (p - pool.baseAddr) / PAGESIZE;

                    if (newsz < psz)
                    {   // Shrink in place
                        synchronized (gcLock)
                        {
                            debug (MEMSTOMP) cstring.memset(p + size, 0xF2, psize - size);
                            pool.freePages(pagenum + newsz, psz - newsz);
                        }
                        return p;
                    }
                    else if (pagenum + newsz <= pool.npages)
                    {
                        // Attempt to expand in place
                        synchronized (gcLock)
                        {
                            for (size_t i = pagenum + psz; 1;)
                            {
                                if (i == pagenum + newsz)
                                {
                                    debug (MEMSTOMP) cstring.memset(p + psize, 0xF0, size - psize);
                                    cstring.memset(&pool.pagetable[pagenum + psz], B_PAGEPLUS, newsz - psz);
                                    return p;
                                }
                                if (i == pool.ncommitted)
                                {
                                    auto u = pool.extendPages(pagenum + newsz - pool.ncommitted);
                                    if (u == ~cast(typeof(u))0)
                                        break;
                                    i = pagenum + newsz;
                                    continue;
                                }
                                if (pool.pagetable[i] != B_FREE)
                                    break;
                                i++;
                            }
                        }
                    }
                }
                if (psize < size ||             // if new size is bigger
                    psize > size * 2)           // or less than half
                {
                    p2 = mallocNoSync(size);
                    if (psize < size)
                        size = psize;
                    //debug(PRINTF) printf("\tcopying %d bytes\n",size);
                    cstring.memcpy(p2, p, size);
                    p = p2;
                }
            }
        }
        return p;
    }


    /**
     * Attempt to in-place enlarge the memory block pointed to by p by at least
     * minbytes beyond its current capacity, up to a maximum of maxsize.  This
     * does not attempt to move the memory block (like realloc() does).
     *
     * Returns:
     *  0 if could not extend p,
     *  total size of entire memory block if successful.
     */
    size_t extend(void* p, size_t minsize, size_t maxsize)
    {
        if (!thread_needLock())
        {
            return extendNoSync(p, minsize, maxsize);
        }
        else synchronized (gcLock)
        {
            return extendNoSync(p, minsize, maxsize);
        }
    }


    //
    //
    //
    private size_t extendNoSync(void* p, size_t minsize, size_t maxsize)
    in
    {
        assert( minsize <= maxsize );
    }
    body
    {
        if (gcx.running)
            onOutOfMemoryError();

        //debug(PRINTF) printf("GC::extend(p = %p, minsize = %u, maxsize = %u)\n", p, minsize, maxsize);
        version (SENTINEL)
        {
            return 0;
        }
        auto psize = gcx.findSize(p);   // find allocated size
        if (psize < PAGESIZE)
            return 0;                   // cannot extend buckets

        auto psz = psize / PAGESIZE;
        auto minsz = (minsize + PAGESIZE - 1) / PAGESIZE;
        auto maxsz = (maxsize + PAGESIZE - 1) / PAGESIZE;

        auto pool = gcx.findPool(p);
        auto pagenum = (p - pool.baseAddr) / PAGESIZE;

        size_t sz;
        for (sz = 0; sz < maxsz; sz++)
        {
            auto i = pagenum + psz + sz;
            if (i == pool.ncommitted)
                break;
            if (pool.pagetable[i] != B_FREE)
            {   if (sz < minsz)
                    return 0;
                break;
            }
        }
        if (sz >= minsz)
        {
        }
        else if (pagenum + psz + sz == pool.ncommitted)
        {
            auto u = pool.extendPages(minsz - sz);
            if (u == ~cast(typeof(u))0)
                return 0;
            sz = minsz;
        }
        else
            return 0;
        debug (MEMSTOMP) cstring.memset(p + psize, 0xF0, (psz + sz) * PAGESIZE - psize);
        cstring.memset(pool.pagetable + pagenum + psz, B_PAGEPLUS, sz);
        gcx.p_cache = null;
        gcx.size_cache = 0;
        return (psz + sz) * PAGESIZE;
    }


    /**
     *
     */
    void free(void *p)
    {
        if (!p)
        {
            return;
        }

        if (!thread_needLock())
        {
            return freeNoSync(p);
        }
        else synchronized (gcLock)
        {
            return freeNoSync(p);
        }
    }


    //
    //
    //
    private void freeNoSync(void *p)
    {
        assert (p);

        if (gcx.running)
            onOutOfMemoryError();

        Pool *pool;
        uint pagenum;
        Bins bin;
        uint biti;

        // Find which page it is in
        pool = gcx.findPool(p);
        if (!pool)                              // if not one of ours
            return;                             // ignore
        sentinel_Invariant(p);
        p = sentinel_sub(p);
        pagenum = (p - pool.baseAddr) / PAGESIZE;
        biti = cast(uint)(p - pool.baseAddr) / 16;
        pool.noscan.clear(biti);
        if (pool.finals.nbits && pool.finals.testClear(biti))
            gcx.rt_finalize(sentinel_add(p), false);

        gcx.p_cache = null;
        bin = cast(Bins)pool.pagetable[pagenum];
        if (bin == B_PAGE)              // if large alloc
        {   int npages;
            uint n;

            // Free pages
            npages = 1;
            n = pagenum;
            while (++n < pool.ncommitted && pool.pagetable[n] == B_PAGEPLUS)
                npages++;
            debug (MEMSTOMP) cstring.memset(p, 0xF2, npages * PAGESIZE);
            pool.freePages(pagenum, npages);
        }
        else
        {   // Add to free list
            List *list = cast(List *)p;

            debug (MEMSTOMP) cstring.memset(p, 0xF2, binsize[bin]);

            list.next = gcx.bucket[bin];
            gcx.bucket[bin] = list;
        }
        gcx.log_free(sentinel_add(p));
    }


    /**
     * Determine the allocated size of pointer p.  If p is an interior pointer
     * or not a gc allocated pointer, return 0.
     */
    size_t capacity(void *p)
    {
        if (!p)
        {
            return 0;
        }

        if (!thread_needLock())
        {
            return sizeOfNoSync(p);
        }
        else synchronized (gcLock)
        {
            return sizeOfNoSync(p);
        }
    }


    //
    //
    //
    private size_t sizeOfNoSync(void *p)
    {
        assert (p);

        version (SENTINEL)
        {
            p = sentinel_sub(p);
            size_t size = gcx.findSize(p);

            // Check for interior pointer
            // This depends on:
            // 1) size is a power of 2 for less than PAGESIZE values
            // 2) base of memory pool is aligned on PAGESIZE boundary
            if (cast(size_t)p & (size - 1) & (PAGESIZE - 1))
                size = 0;
            return size ? size - SENTINAL_EXTRA : 0;
        }
        else
        {
            if (p !is null && p == gcx.p_cache)
                return gcx.size_cache;

            size_t size = gcx.findSize(p);

            // Check for interior pointer
            // This depends on:
            // 1) size is a power of 2 for less than PAGESIZE values
            // 2) base of memory pool is aligned on PAGESIZE boundary
            if (cast(size_t)p & (size - 1) & (PAGESIZE - 1))
                size = 0;
            else
            {
                gcx.p_cache = p;
                gcx.size_cache = size;
            }

            return size;
        }
    }


    /**
     * Verify that pointer p:
     *  1) belongs to this memory pool
     *  2) points to the start of an allocated piece of memory
     *  3) is not on a free list
     */
    void check(void *p)
    {
        if (!p)
        {
            return;
        }

        if (!thread_needLock())
        {
            checkNoSync(p);
        }
        else synchronized (gcLock)
        {
            checkNoSync(p);
        }
    }


    //
    //
    //
    private void checkNoSync(void *p)
    {
        assert(p);

        sentinel_Invariant(p);
        debug (PTRCHECK)
        {
            Pool* pool;
            uint pagenum;
            Bins bin;
            size_t size;

            p = sentinel_sub(p);
            pool = gcx.findPool(p);
            assert(pool);
            pagenum = (p - pool.baseAddr) / PAGESIZE;
            bin = cast(Bins)pool.pagetable[pagenum];
            assert(bin <= B_PAGE);
            size = binsize[bin];
            assert((cast(size_t)p & (size - 1)) == 0);

            debug (PTRCHECK2)
            {
                if (bin < B_PAGE)
                {
                    // Check that p is not on a free list
                    List *list;

                    for (list = gcx.bucket[bin]; list; list = list.next)
                    {
                        assert(cast(void *)list != p);
                    }
                }
            }
        }
    }


    //
    //
    //
    private void setStackBottom(void *p)
    {
        version (STACKGROWSDOWN)
        {
            //p = (void *)((uint *)p + 4);
            if (p > gcx.stackBottom)
            {
                //debug(PRINTF) printf("setStackBottom(%p)\n", p);
                gcx.stackBottom = p;
            }
        }
        else
        {
            //p = (void *)((uint *)p - 4);
            if (p < gcx.stackBottom)
            {
                //debug(PRINTF) printf("setStackBottom(%p)\n", p);
                gcx.stackBottom = cast(char *)p;
            }
        }
    }


    static void scanStaticData(gc_t g)
    {
        void *pbot;
        void *ptop;
        size_t nbytes;

        //debug(PRINTF) printf("+GC.scanStaticData()\n");
        os_query_staticdataseg(&pbot, &nbytes);
        ptop = pbot + nbytes;
        version (GNU) {
            if (pbot) {
                g.addRange(pbot, ptop);
            }
        } else {
            g.addRange(pbot, ptop);
        }
        //debug(PRINTF) printf("-GC.scanStaticData()\n");
    }

    static void unscanStaticData(gc_t g)
    {
        void *pbot;
        size_t nbytes;

        os_query_staticdataseg(&pbot, &nbytes);
        version (GNU) {
            if (pbot) {
                g.removeRange(pbot);
            }
        } else {
            g.removeRange(pbot);
        }
    }


    /**
     * add p to list of roots
     */
    void addRoot(void *p)
    {
        if (!p)
        {
            return;
        }

        if (!thread_needLock())
        {
            gcx.addRoot(p);
        }
        else synchronized (gcLock)
        {
            gcx.addRoot(p);
        }
    }


    /**
     * remove p from list of roots
     */
    void removeRoot(void *p)
    {
        if (!p)
        {
            return;
        }

        if (!thread_needLock())
        {
            gcx.removeRoot(p);
        }
        else synchronized (gcLock)
        {
            gcx.removeRoot(p);
        }
    }


    /**
     * add range to scan for roots
     */
    void addRange(void *pbot, void *ptop)
    {
        if (!pbot || !ptop)
        {
            return;
        }

        //debug(PRINTF) printf("+GC.addRange(pbot = %p, ptop = %p)\n", pbot, ptop);
        if (!thread_needLock())
        {
            gcx.addRange(pbot, ptop);
        }
        else synchronized (gcLock)
        {
            gcx.addRange(pbot, ptop);
        }
        //debug(PRINTF) printf("-GC.addRange()\n");
    }


    /**
     * remove range
     */
    void removeRange(void *p)
    {
        if (!p)
        {
            return;
        }

        if (!thread_needLock())
        {
            gcx.removeRange(p);
        }
        else synchronized (gcLock)
        {
            gcx.removeRange(p);
        }
    }


    /**
     * do full garbage collection
     */
    void fullCollect()
    {
        debug(PRINTF) printf("GC.fullCollect()\n");

        if (!thread_needLock())
        {
            gcx.fullcollectshell();
        }
        else synchronized (gcLock)
        {
            gcx.fullcollectshell();
        }

        version (none)
        {
            GCStats stats;

            getStats(stats);
            debug(PRINTF) printf("poolsize = %x, usedsize = %x, freelistsize = %x\n",
                    stats.poolsize, stats.usedsize, stats.freelistsize);
        }

        gcx.log_collect();
    }


    /**
     * do full garbage collection ignoring roots
     */
    void fullCollectNoStack()
    {
        if (!thread_needLock())
        {
            gcx.noStack++;
            gcx.fullcollectshell();
            gcx.noStack--;
        }
        else synchronized (gcLock)
        {
            gcx.noStack++;
            gcx.fullcollectshell();
            gcx.noStack--;
        }
    }


    /**
     * do generational garbage collection
     */
    void genCollect()
    {
        synchronized (gcLock)
        {
            gcx.fullcollectshell();
        }
    }

    void minimize()     // minimize physical memory usage
    {
        // Not implemented, ignore
    }

    void setFinalizer(void *p, GC_FINALIZER pFn)
    {
        synchronized (gcLock)
        {
            gcx.finalizer = pFn;
            gcx.doFinalize(p);
        }
    }


    void hasPointers(void *p)
    {
        synchronized (gcLock)
        {
            gcx.HasPointers(p);
        }
    }


    void hasNoPointers(void *p)
    {
        if (!gcx.conservative)
        {   synchronized (gcLock)
            {
                gcx.HasNoPointers(p);
            }
        }
    }


    void setV1_0()
    {
        gcx.conservative = 1;
    }


    /**
     * Retrieve statistics about garbage collection.
     * Useful for debugging and tuning.
     */
    void getStats(out GCStats stats)
    {
        if (!thread_needLock())
        {
            getStatsNoSync(stats);
        }
        else synchronized (gcLock)
        {
            getStatsNoSync(stats);
        }
    }


    //
    //
    //
    private void getStatsNoSync(out GCStats stats)
    {
        size_t psize = 0;
        size_t usize = 0;
        size_t flsize = 0;

        size_t n;
        size_t bsize = 0;

        //debug(PRINTF) printf("getStats()\n");
        cstring.memset(&stats, 0, GCStats.sizeof);

        for (n = 0; n < gcx.npools; n++)
        {   Pool *pool = gcx.pooltable[n];

            psize += pool.ncommitted * PAGESIZE;
            for (uint j = 0; j < pool.ncommitted; j++)
            {
                Bins bin = cast(Bins)pool.pagetable[j];
                if (bin == B_FREE)
                    stats.freeblocks++;
                else if (bin == B_PAGE)
                    stats.pageblocks++;
                else if (bin < B_PAGE)
                    bsize += PAGESIZE;
            }
        }

        for (n = 0; n < B_PAGE; n++)
        {
            //debug(PRINTF) printf("bin %d\n", n);
            for (List *list = gcx.bucket[n]; list; list = list.next)
            {
                //debug(PRINTF) printf("\tlist %p\n", list);
                flsize += binsize[n];
            }
        }

        usize = bsize - flsize;

        stats.poolsize = psize;
        stats.usedsize = bsize - flsize;
        stats.freelistsize = flsize;
    }
}


/* ============================ Gcx =============================== */

enum
{   PAGESIZE =    4096,
    COMMITSIZE = (4096*16),
    POOLSIZE =   (4096*256),
}


enum
{
    B_16,
    B_32,
    B_64,
    B_128,
    B_256,
    B_512,
    B_1024,
    B_2048,
    B_PAGE,             // start of large alloc
    B_PAGEPLUS,         // continuation of large alloc
    B_FREE,             // free page
    B_UNCOMMITTED,      // memory not committed for this page
    B_MAX
}


alias ubyte Bins;


struct List
{
    List *next;
}


struct Range
{
    void *pbot;
    void *ptop;
}


const uint binsize[B_MAX] = [ 16,32,64,128,256,512,1024,2048,4096 ];
const size_t notbinsize[B_MAX] = [ ~(16-1),~(32-1),~(64-1),~(128-1),~(256-1),
                                ~(512-1),~(1024-1),~(2048-1),~(4096-1) ];

/* ============================ Gcx =============================== */


struct Gcx
{
    debug (THREADINVARIANT)
    {
        pthread_t self;
        void thread_Invariant()
        {
            if (self != pthread_self())
                printf("thread_Invariant(): gcx = %x, self = %x, pthread_self() = %x\n", this, self, pthread_self());
            assert(self == pthread_self());
        }
    }
    else
    {
        void thread_Invariant() { }
    }

    void *p_cache;
    size_t size_cache;

    size_t nroots;
    size_t rootdim;
    void **roots;

    size_t nranges;
    size_t rangedim;
    Range *ranges;

    uint conservative;  // !=0 means conservative behavior
    uint noStack;       // !=0 means don't scan stack
    uint log;           // turn on logging
    uint anychanges;
    void *stackBottom;
    uint inited;
    uint running;
    int disabled;       // turn off collections if >0

    byte *minAddr;      // min(baseAddr)
    byte *maxAddr;      // max(topAddr)

    uint npools;
    Pool **pooltable;

    List *bucket[B_MAX];        // free list for each size

    GC_FINALIZER finalizer;     // finalizer function (one per GC)

    private void rt_finalize( void* p, bool dummy )
    {
        if (finalizer)
            (*finalizer)(p, dummy);
    }


    void initialize()
    {   int dummy;

        (cast(byte *)this)[0 .. Gcx.sizeof] = 0;
        stackBottom = cast(char *)&dummy;
        log_init();
        debug (THREADINVARIANT)
            self = pthread_self();
        //printf("gcx = %p, self = %x\n", this, self);
        inited = 1;
    }


    void Dtor()
    {
        inited = 0;

        for (uint i = 0; i < npools; i++)
        {   Pool *pool = pooltable[i];

            pool.Dtor();
            cstdlib.free(pool);
        }
        if (pooltable)
            cstdlib.free(pooltable);

        if (roots)
            cstdlib.free(roots);

        if (ranges)
            cstdlib.free(ranges);
    }


    void Invariant() { }


    invariant()
    {
        if (inited)
        {
        //printf("Gcx.invariant(): this = %p\n", this);
            uint i;

            // Assure we're called on the right thread
            debug (THREADINVARIANT) assert(self == pthread_self());

            for (i = 0; i < npools; i++)
            {   Pool *pool = pooltable[i];

                pool.Invariant();
                if (i == 0)
                {
                    assert(minAddr == pool.baseAddr);
                }
                if (i + 1 < npools)
                {
                    assert(pool.opCmp(pooltable[i + 1]) < 0);
                }
                else if (i + 1 == npools)
                {
                    assert(maxAddr == pool.topAddr);
                }
            }

            if (roots)
            {
                assert(rootdim != 0);
                assert(nroots <= rootdim);
            }

            if (ranges)
            {
                assert(rangedim != 0);
                assert(nranges <= rangedim);

                for (i = 0; i < nranges; i++)
                {
                    assert(ranges[i].pbot);
                    assert(ranges[i].ptop);
                    assert(ranges[i].pbot <= ranges[i].ptop);
                }
            }

            for (i = 0; i < B_PAGE; i++)
            {
                for (List *list = bucket[i]; list; list = list.next)
                {
                }
            }
        }
    }


    /**
     *
     */
    void addRoot(void *p)
    {
        if (nroots == rootdim)
        {
            size_t newdim = rootdim * 2 + 16;
            void** newroots;

            newroots = cast(void **)cstdlib.malloc(newdim * newroots[0].sizeof);
            if (!newroots)
                onOutOfMemoryError();
            if (roots)
            {   cstring.memcpy(newroots, roots, nroots * newroots[0].sizeof);
                cstdlib.free(roots);
            }
            roots = newroots;
            rootdim = newdim;
        }
        roots[nroots] = p;
        nroots++;
    }


    /**
     *
     */
    void removeRoot(void *p)
    {
        for (size_t i = nroots; i--;)
        {
            if (roots[i] == p)
            {
                nroots--;
                cstring.memmove(roots + i, roots + i + 1, (nroots - i) * roots[0].sizeof);
                return;
            }
        }
        assert(0);
    }


    /**
     *
     */
    void addRange(void *pbot, void *ptop)
    {
        debug(PRINTF) printf("addRange(pbot = %p, ptop = %p)\n", pbot, ptop);
        //debug(PRINTF) printf("Thread %x ", pthread_self());
        debug(PRINTF) printf("%p.Gcx::addRange(%p, %p), nranges = %d\n", this, pbot, ptop, cast(int)nranges);
        if (nranges == rangedim)
        {
            size_t newdim = rangedim * 2 + 16;
            Range *newranges;

            newranges = cast(Range *)cstdlib.malloc(newdim * newranges[0].sizeof);
            if (!newranges)
                onOutOfMemoryError();
            if (ranges)
            {   cstring.memcpy(newranges, ranges, nranges * newranges[0].sizeof);
                cstdlib.free(ranges);
            }
            ranges = newranges;
            rangedim = newdim;
        }
        ranges[nranges].pbot = pbot;
        ranges[nranges].ptop = ptop;
        nranges++;
    }


    /**
     *
     */
    void removeRange(void *pbot)
    {
        //debug(PRINTF) printf("Thread %x ", pthread_self());
        debug(PRINTF) printf("%p.Gcx.removeRange(%p), nranges = %d\n", this, pbot, cast(int)nranges);
        for (size_t i = nranges; i--;)
        {
            if (ranges[i].pbot == pbot)
            {
                nranges--;
                cstring.memmove(ranges + i, ranges + i + 1, (nranges - i) * ranges[0].sizeof);
                return;
            }
        }
        debug(PRINTF) printf("Wrong thread\n");

        // This is a fatal error, but ignore it.
        // The problem is that we can get a Close() call on a thread
        // other than the one the range was allocated on.
        //assert(zero);
    }


    /**
     * Find Pool that pointer is in.
     * Return null if not in a Pool.
     * Assume pooltable[] is sorted.
     */
    Pool *findPool(void *p)
    {
        if (p >= minAddr && p < maxAddr)
        {
            if (npools == 1)
            {
                return pooltable[0];
            }

            for (uint i = 0; i < npools; i++)
            {   Pool *pool;

                pool = pooltable[i];
                if (p < pool.topAddr)
                {   if (pool.baseAddr <= p)
                        return pool;
                    break;
                }
            }
        }
        return null;
    }


    /**
     * Find size of pointer p.
     * Returns 0 if not a gc'd pointer
     */
    size_t findSize(void *p)
    {
        Pool *pool;
        size_t size = 0;

        pool = findPool(p);
        if (pool)
        {
            uint pagenum;
            Bins bin;

            pagenum = (cast(uint)(p - pool.baseAddr)) / PAGESIZE;
            bin = cast(Bins)pool.pagetable[pagenum];
            size = binsize[bin];
            if (bin == B_PAGE)
            {   uint npages = pool.ncommitted;
                ubyte* pt;
                uint i;

                pt = &pool.pagetable[0];
                for (i = pagenum + 1; i < npages; i++)
                {
                    if (pt[i] != B_PAGEPLUS)
                        break;
                }
                size = (i - pagenum) * PAGESIZE;
            }
        }
        return size;
    }


    /**
     * Compute bin for size.
     */
    static Bins findBin(size_t size)
    {   Bins bin;

        if (size <= 256)
        {
            if (size <= 64)
            {
                if (size <= 16)
                    bin = B_16;
                else if (size <= 32)
                    bin = B_32;
                else
                    bin = B_64;
            }
            else
            {
                if (size <= 128)
                    bin = B_128;
                else
                    bin = B_256;
            }
        }
        else
        {
            if (size <= 1024)
            {
                if (size <= 512)
                    bin = B_512;
                else
                    bin = B_1024;
            }
            else
            {
                if (size <= 2048)
                    bin = B_2048;
                else
                    bin = B_PAGE;
            }
        }
        return bin;
    }


    /**
     * Allocate a chunk of memory that is larger than a page.
     * Return null if out of memory.
     */
    void *bigAlloc(size_t size)
    {
        Pool *pool;
        uint npages;
        uint n;
        uint pn;
        uint freedpages;
        void *p;
        int state;

        npages = (size + PAGESIZE - 1) / PAGESIZE;

        for (state = 0; ; )
        {
            // This code could use some refinement when repeatedly
            // allocating very large arrays.

            for (n = 0; n < npools; n++)
            {
                pool = pooltable[n];
                pn = pool.allocPages(npages);
                if (pn != ~cast(typeof(pn))0)
                    goto L1;
            }

            // Failed
            switch (state)
            {
                case 0:
                    if (disabled)
                    {   state = 1;
                        continue;
                    }
                    // Try collecting
                    freedpages = fullcollectshell();
                    if (freedpages >= npools * ((POOLSIZE / PAGESIZE) / 4))
                    {   state = 1;
                        continue;
                    }
                    // Allocate new pool
                    pool = newPool(npages);
                    if (!pool)
                    {   state = 2;
                        continue;
                    }
                    pn = pool.allocPages(npages);
                    assert(pn != ~cast(typeof(pn))0);
                    goto L1;

                case 1:
                    // Allocate new pool
                    pool = newPool(npages);
                    if (!pool)
                        goto Lnomemory;
                    pn = pool.allocPages(npages);
                    assert(pn != ~cast(typeof(pn))0);
                    goto L1;

                case 2:
                    goto Lnomemory;
            }
        }

      L1:
        pool.pagetable[pn] = B_PAGE;
        if (npages > 1)
            cstring.memset(&pool.pagetable[pn + 1], B_PAGEPLUS, npages - 1);
        p = pool.baseAddr + pn * PAGESIZE;
        cstring.memset(cast(char *)p + size, 0, npages * PAGESIZE - size);
        debug (MEMSTOMP) cstring.memset(p, 0xF1, size);
        //debug(PRINTF) printf("\tp = %p\n", p);
        return p;

      Lnomemory:
        onOutOfMemoryError();
        return null;
    }


    /**
     * Allocate a new pool with at least npages in it.
     * Sort it into pooltable[].
     * Return null if failed.
     */
    Pool *newPool(uint npages)
    {
        Pool *pool;
        Pool **newpooltable;
        uint newnpools;
        uint i;

        //debug(PRINTF) printf("************Gcx::newPool(npages = %d)****************\n", npages);

        // Round up to COMMITSIZE pages
        npages = (npages + (COMMITSIZE/PAGESIZE) - 1) & ~(COMMITSIZE/PAGESIZE - 1);

        // Minimum of POOLSIZE
        if (npages < POOLSIZE/PAGESIZE)
            npages = POOLSIZE/PAGESIZE;
        else if (npages > POOLSIZE/PAGESIZE)
        {   // Give us 150% of requested size, so there's room to extend
            auto n = npages + (npages >> 1);
            if (n < size_t.max/PAGESIZE)
                npages = n;
        }

        // Allocate successively larger pools up to 8 megs
        if (npools)
        {   uint n;

            n = npools;
            if (n > 8)
                n = 8;                  // cap pool size at 8 megs
            n *= (POOLSIZE / PAGESIZE);
            if (npages < n)
                npages = n;
        }

        pool = cast(Pool *)cstdlib.calloc(1, Pool.sizeof);
        if (pool)
        {
            pool.initialize(npages);
            if (!pool.baseAddr)
                goto Lerr;

            newnpools = npools + 1;
            newpooltable = cast(Pool **)cstdlib.realloc(pooltable, newnpools * (Pool *).sizeof);
            if (!newpooltable)
                goto Lerr;

            // Sort pool into newpooltable[]
            for (i = 0; i < npools; i++)
            {
                if (pool.opCmp(newpooltable[i]) < 0)
                     break;
            }
            cstring.memmove(newpooltable + i + 1, newpooltable + i, (npools - i) * (Pool *).sizeof);
            newpooltable[i] = pool;

            pooltable = newpooltable;
            npools = newnpools;

            minAddr = pooltable[0].baseAddr;
            maxAddr = pooltable[npools - 1].topAddr;
        }
        return pool;

      Lerr:
        pool.Dtor();
        cstdlib.free(pool);
        return null;
    }


    /**
     * Allocate a page of bin's.
     * Returns:
     *  0       failed
     */
    int allocPage(Bins bin)
    {
        //debug(PRINTF) printf("Gcx::allocPage(bin = %d)\n", bin);
        Pool *pool;
        uint n;
        uint pn;
        byte *p;
        byte *ptop;

        for (n = 0; n < npools; n++)
        {
            pool = pooltable[n];
            pn = pool.allocPages(1);
            if (pn != ~cast(typeof(pn))0)
                goto L1;
        }
        return 0;               // failed

      L1:
        pool.pagetable[pn] = cast(ubyte)bin;

        // Convert page to free list
        size_t size = binsize[bin];
        List **b = &bucket[bin];

        p = pool.baseAddr + pn * PAGESIZE;
        ptop = p + PAGESIZE;
        for (; p < ptop; p += size)
        {
            (cast(List *)p).next = *b;
            *b = cast(List *)p;
        }
        return 1;
    }


    /**
     * Search a range of memory values and mark any pointers into the GC pool.
     */
    void mark(void *pbot, void *ptop)
    {
        void **p1 = cast(void **)pbot;
        void **p2 = cast(void **)ptop;
        uint changes = 0;
        size_t pageCache;

        //printf("marking range: %p -> %p\n", pbot, ptop);
        for (; p1 < p2; p1++)
        {
            Pool *pool;
            byte *p = cast(byte *)(*p1);

            //if (log) debug(PRINTF) printf("\t%p mark %p\n", p1, p);
            if (p >= minAddr && p < maxAddr)
            {
                /* Skip page if we've already scanned it
                 */
                if ((cast(size_t)p & ~cast(size_t)(PAGESIZE-1)) == pageCache)
                    continue;

                pool = findPool(p);
                if (pool)
                {
                    size_t offset = cast(size_t)(p - pool.baseAddr);
                    uint biti;
                    uint pn = offset / PAGESIZE;
                    Bins bin = cast(Bins)pool.pagetable[pn];

                    //debug(PRINTF) printf("\t\tfound pool %p, base=%p, pn = %d, bin = %d, biti = x%x\n", pool, pool.baseAddr, pn, bin, biti);

                    // Adjust bit to be at start of allocated memory block
                    if (bin <= B_PAGE)
                    {
                        biti = (offset & notbinsize[bin]) >> 4;
                        //debug(PRINTF) printf("\t\tbiti = x%x\n", biti);
                    }
                    else if (bin == B_PAGEPLUS)
                    {
                        do
                        {   --pn;
                        } while (cast(Bins)pool.pagetable[pn] == B_PAGEPLUS);
                        biti = pn * (PAGESIZE / 16);
                    }
                    else
                    {
                        // Don't mark bits in B_FREE or B_UNCOMMITTED pages
                        continue;
                    }

                    if (bin >= B_PAGE)  // cache B_PAGE and B_PAGEPLUS lookups
                        pageCache = cast(size_t)p & ~cast(size_t)(PAGESIZE-1);

                    //debug(PRINTF) printf("\t\tmark(x%x) = %llx\n", biti, pool.mark.test(biti));
                    if (!pool.mark.test(biti))
                    {
                        //if (log) debug(PRINTF) printf("\t\tmarking %p\n", p);
                        pool.mark.set(biti);
                        if (!pool.noscan.test(biti))
                        {
                            pool.scan.set(biti);
                            changes = 1;
                        }
                        log_parent(sentinel_add(pool.baseAddr + biti * 16), sentinel_add(pbot));
                    }
                }
            }
        }
        anychanges |= changes;
    }


    /**
     * Return number of full pages free'd.
     */
    size_t fullcollectshell()
    {
        // The purpose of the 'shell' is to ensure all the registers
        // get put on the stack so they'll be scanned
        void *sp;
        size_t result;
        version (GNU)
        {
            __builtin_unwind_init();
            sp = & sp;
        }
        else version (D_InlineAsm_X86)
        {
            asm
            {
                pushad              ;
                mov sp[EBP],ESP     ;
            }
        }
        else version (D_InlineAsm_X86_64)
        {
            asm
            {
                push RAX ;
                push RBX ;
                push RCX ;
                push RDX ;
                push RSI ;
                push RDI ;
                push RBP ;
                push R8  ;
                push R9  ;
                push R10  ;
                push R11  ;
                push R12  ;
                push R13  ;
                push R14  ;
                push R15  ;
                push RAX ;   // 16 byte align the stack
            }
        }
        else
        {
            static assert( false, "Architecture not supported." );
        }
        result = fullcollect(sp);
        version (GNU)
        {
            // nothing to do
        }
        else version (D_InlineAsm_X86)
        {
            asm
            {
                popad;
            }
        }
        else version (D_InlineAsm_X86_64)
        {
            asm
            {
                pop RAX ;   // 16 byte align the stack
                pop R15  ;
                pop R14  ;
                pop R13  ;
                pop R12  ;
                pop R11  ;
                pop R10  ;
                pop R9  ;
                pop R8  ;
                pop RBP ;
                pop RDI ;
                pop RSI ;
                pop RDX ;
                pop RCX ;
                pop RBX ;
                pop RAX ;
            }
        }
        else
        {
            static assert( false, "Architecture not supported." );
        }
        return result;
    }


    /**
     *
     */
    size_t fullcollect(void *stackTop)
    {
        uint n;
        Pool *pool;

        debug(COLLECT_PRINTF) printf("Gcx.fullcollect()\n");

        if (running)
            onOutOfMemoryError();
        running = 1;

        Thread.pauseAll();

        p_cache = null;
        size_cache = 0;

        anychanges = 0;
        for (n = 0; n < npools; n++)
        {
            pool = pooltable[n];
            pool.mark.zero();
            pool.scan.zero();
            pool.freebits.zero();
        }

        // Mark each free entry, so it doesn't get scanned
        for (n = 0; n < B_PAGE; n++)
        {
            for (List *list = bucket[n]; list; list = list.next)
            {
                pool = findPool(list);
                assert(pool);
                pool.freebits.set(cast(uint)(cast(byte *)list - pool.baseAddr) / 16);
            }
        }

        for (n = 0; n < npools; n++)
        {
            pool = pooltable[n];
            pool.mark.copy(&pool.freebits);
        }

        version (MULTI_THREADED)
        {
            // Scan stacks and registers for each paused thread
            Thread[] threads = Thread.getAll();
            //thread_id id = cast(thread_id) GetCurrentThread();
            for (n = 0; n < threads.length; n++)
            {   Thread t = threads[n];

                if (t && t.getState() == Thread.TS.RUNNING)
                {
                    if (noStack && threads.length == 1)
                        break;

                    version (Win32)
                    {
                        CONTEXT context;

                        context.ContextFlags = CONTEXT_INTEGER | CONTEXT_CONTROL;
                        if (!GetThreadContext(t.hdl, &context))
                        {
                            assert(0);
                        }
                        debug (PRINTF) printf("mt scan stack bot = %p, top = %p\n", context.Esp, t.stackBottom);
                        mark(cast(void *)context.Esp, t.stackBottom);
                        mark(&context.Edi, &context.Eip);
                    }
                    else version (GNU)
                    {
                        if (t.isSelf())
                            t.stackTop = Thread.getESP();

                        //%%fry printf("top=%08x bot=%08x ext=%08x\n", t.stackTop, t.stackBottom, Thread.getESP());//%%try
                        version (STACKGROWSDOWN)
                            mark(t.stackTop, t.stackBottom);
                        else
                            mark(t.stackBottom, t.stackTop);
                    }
                    else version (OSX)
                    {
                        x86_thread_state32_t   state = void;
                        mach_msg_type_number_t count = x86_THREAD_STATE32_COUNT;

                        if (thread_get_state(t.machid,
                                             x86_THREAD_STATE32,
                                             &state,
                                             &count) != KERN_SUCCESS)
                        {
                            assert(0);
                        }
                        debug (PRINTF) printf("mt scan stack bot = %p, top = %p\n", state.esp, t.stackBottom);

                        mark(cast(void *)state.esp, t.stackBottom);
                        mark(&state.eax, &state.esp);
                    }
                    else version (Posix)
                    {
                        // The registers are already stored in the stack
                        //printf("Thread: ESP = %p, stackBottom = %p, isSelf = %d\n", Thread.getESP(), t.stackBottom, t.isSelf());
                        if (t.isSelf())
                            t.stackTop = Thread.getESP();

                        version (STACKGROWSDOWN)
                            mark(t.stackTop, t.stackBottom);
                        else
                            mark(t.stackBottom, t.stackTop);
                    }
                }
            }
        }
        else
        {
            if (!noStack)
            {
                // Scan stack for main thread
                debug(PRINTF) printf(" scan stack bot = %p, top = %p\n", stackTop, stackBottom);
                version (STACKGROWSDOWN)
                    mark(stackTop, stackBottom);
                else
                    mark(stackBottom, stackTop);
            }
        }

        // Scan roots[]
        debug(COLLECT_PRINTF) printf("scan roots[]\n");
        mark(roots, roots + nroots);

        // Scan ranges[]
        debug(COLLECT_PRINTF) printf("scan ranges[]\n");
        //log++;
        for (n = 0; n < nranges; n++)
        {
            debug(COLLECT_PRINTF) printf("\t%p .. %p\n", ranges[n].pbot, ranges[n].ptop);
            mark(ranges[n].pbot, ranges[n].ptop);
        }
        //log--;

        debug(COLLECT_PRINTF) printf("\tscan heap\n");
        while (anychanges)
        {
            anychanges = 0;
            for (n = 0; n < npools; n++)
            {
                pool = pooltable[n];

                auto bbase = pool.scan.base();
                auto btop = bbase + pool.scan.nwords;
                for (auto b = bbase; b < btop;)
                {   Bins bin;
                    uint pn;
                    uint u;
                    byte *o;

                    auto bitm = *b;
                    if (!bitm)
                    {   b++;
                        continue;
                    }
                    *b = 0;

                    o = pool.baseAddr + (b - bbase) * (typeof(bitm).sizeof*8) * 16;
                    if (!(bitm & 0xFFFF))
                    {
                        bitm >>= 16;
                        o += 16 * 16;
                    }
                    for (; bitm; o += 16, bitm >>= 1)
                    {
                        if (!(bitm & 1))
                            continue;

                        pn = (o - pool.baseAddr) / PAGESIZE;
                        bin = cast(Bins)pool.pagetable[pn];
                        if (bin < B_PAGE)
                        {
                            mark(o, o + binsize[bin]);
                        }
                        else if (bin == B_PAGE || bin == B_PAGEPLUS)
                        {
                            if (bin == B_PAGEPLUS)
                            {
                                while (pool.pagetable[pn - 1] != B_PAGE)
                                    pn--;
                            }
                            u = 1;
                            while (pn + u < pool.ncommitted && pool.pagetable[pn + u] == B_PAGEPLUS)
                                u++;
                            mark(o, o + u * PAGESIZE);
                        }
                    }
                }
            }
        }

        /* After done marking, resume the frozen threads. This is necessary
         * so that the finalizers can run without deadlocking with some frozen thread.
         */
        Thread.resumeAll();

        // Free up everything not marked
        debug(COLLECT_PRINTF) printf("\tfree'ing\n");
        size_t freedpages = 0;
        size_t freed = 0;
        for (n = 0; n < npools; n++)
        {
            pool = pooltable[n];
            auto bbase = pool.mark.base();
            auto ncommitted = pool.ncommitted;
            for (auto pn = 0; pn < ncommitted; pn++, bbase += PAGESIZE / (32 * 16))
            {
                Bins bin = cast(Bins)pool.pagetable[pn];

                if (bin < B_PAGE)
                {   byte *p;
                    byte *ptop;
                    uint biti;
                    uint bitstride;
                    uint size = binsize[bin];

                    p = pool.baseAddr + pn * PAGESIZE;
                    ptop = p + PAGESIZE;
                    biti = pn * (PAGESIZE/16);
                    bitstride = size / 16;

    version(none) // BUG: doesn't work because freebits() must also be cleared
    {
                    // If free'd entire page
                    if (bbase[0] == 0 && bbase[1] == 0 && bbase[2] == 0 && bbase[3] == 0 &&
                        bbase[4] == 0 && bbase[5] == 0 && bbase[6] == 0 && bbase[7] == 0)
                    {
                        for (; p < ptop; p += size, biti += bitstride)
                        {
                            if (pool.finals.nbits && pool.finals.testClear(biti))
                                rt_finalize(cast(List *)sentinel_add(p), false);

                            List *list = cast(List *)p;
                            //debug(PRINTF) printf("\tcollecting %p\n", list);
                            log_free(sentinel_add(list));

                            debug (MEMSTOMP) cstring.memset(p, 0xF3, size);
                        }
                        pool.pagetable[pn] = B_FREE;
                        freed += PAGESIZE;
                        //debug(PRINTF) printf("freeing entire page %d\n", pn);
                        continue;
                    }
    }
                    for (; p < ptop; p += size, biti += bitstride)
                    {
                        if (!pool.mark.test(biti))
                        {
                            sentinel_Invariant(sentinel_add(p));

                            pool.freebits.set(biti);
                            pool.noscan.clear(biti);
                            if (pool.finals.nbits && pool.finals.testClear(biti))
                                rt_finalize(cast(List *)sentinel_add(p), false);

                            List *list = cast(List *)p;
                            debug(PRINTF) printf("\tcollecting %p\n", list);
                            log_free(sentinel_add(list));

                            debug (MEMSTOMP) cstring.memset(p, 0xF3, size);

                            freed += size;
                        }
                    }
                }
                else if (bin == B_PAGE)
                {   uint biti = pn * (PAGESIZE / 16);

                    if (!pool.mark.test(biti))
                    {   byte *p = pool.baseAddr + pn * PAGESIZE;

                        sentinel_Invariant(sentinel_add(p));
                        pool.noscan.clear(biti);
                        if (pool.finals.nbits && pool.finals.testClear(biti))
                            rt_finalize(sentinel_add(p), false);

                        debug(COLLECT_PRINTF) printf("\tcollecting big %p\n", p);
                        log_free(sentinel_add(p));
                        pool.pagetable[pn] = B_FREE;
                        freedpages++;
                        debug (MEMSTOMP) cstring.memset(p, 0xF3, PAGESIZE);
                        while (pn + 1 < ncommitted && pool.pagetable[pn + 1] == B_PAGEPLUS)
                        {
                            pn++;
                            pool.pagetable[pn] = B_FREE;
                            freedpages++;

                            debug (MEMSTOMP)
                            {   p += PAGESIZE;
                                cstring.memset(p, 0xF3, PAGESIZE);
                            }
                        }
                    }
                }
            }
        }

        // Zero buckets
        bucket[] = null;

        // Free complete pages, rebuild free list
        debug(COLLECT_PRINTF) printf("\tfree complete pages\n");
        size_t recoveredpages = 0;
        for (n = 0; n < npools; n++)
        {   uint pn;
            uint ncommitted;

            pool = pooltable[n];
            ncommitted = pool.ncommitted;
            for (pn = 0; pn < ncommitted; pn++)
            {
                Bins bin = cast(Bins)pool.pagetable[pn];
                uint biti;
                uint u;

                if (bin < B_PAGE)
                {
                    uint size = binsize[bin];
                    uint bitstride = size / 16;
                    uint bitbase = pn * (PAGESIZE / 16);
                    uint bittop = bitbase + (PAGESIZE / 16);
                    byte *p;

                    biti = bitbase;
                    for (biti = bitbase; biti < bittop; biti += bitstride)
                    {   if (!pool.freebits.test(biti))
                            goto Lnotfree;
                    }
                    pool.pagetable[pn] = B_FREE;
                    recoveredpages++;
                    continue;

                 Lnotfree:
                    p = pool.baseAddr + pn * PAGESIZE;
                    for (u = 0; u < PAGESIZE; u += size)
                    {   biti = bitbase + u / 16;
                        if (pool.freebits.test(biti))
                        {   List *list;

                            list = cast(List *)(p + u);
                            if (list.next != bucket[bin])       // avoid unnecessary writes
                                list.next = bucket[bin];
                            bucket[bin] = list;
                        }
                    }
                }
            }
        }

        debug(COLLECT_PRINTF) printf("recovered pages = %d\n", recoveredpages);
        debug(COLLECT_PRINTF) printf("\tfree'd %u bytes, %u pages from %u pools\n", freed, freedpages, npools);

        running = 0; // only clear on success

        return freedpages + recoveredpages;
    }


    /**
     * Run finalizer on p when it is free'd.
     */
    void doFinalize(void *p)
    {
        Pool *pool = findPool(p);
        assert(pool);

        // Only allocate finals[] if we actually need it
        if (!pool.finals.nbits)
            pool.finals.alloc(pool.mark.nbits);

        pool.finals.set((p - pool.baseAddr) / 16);
    }


    /**
     * Indicate that block pointed to by p has possible pointers
     * to GC allocated memory in it.
     */

    void HasPointers(void *p)
    {
        Pool *pool = findPool(p);
        assert(pool);

        pool.noscan.clear((p - pool.baseAddr) / 16);
    }


    /**
     * Indicate that block pointed to by p has no possible pointers
     * to GC allocated memory in it.
     */
    void HasNoPointers(void *p)
    {
        //printf("HasNoPointers(%p)\n", p);
        Pool *pool = findPool(p);
        assert(pool);

        pool.noscan.set((p - pool.baseAddr) / 16);
    }


    /***** Leak Detector ******/


    debug (LOGGING)
    {
        LogArray current;
        LogArray prev;


        void log_init()
        {
            //debug(PRINTF) printf("+log_init()\n");
            current.reserve(1000);
            prev.reserve(1000);
            //debug(PRINTF) printf("-log_init()\n");
        }


        void log_malloc(void *p, size_t size)
        {
            debug(PRINTF) printf("+log_malloc(p = %p, size = %d)\n", p, cast(int)size);
            Log log;

            log.p = p;
            log.size = size;
            log.line = GC.line;
            log.file = GC.file;
            log.parent = null;

            GC.line = 0;
            GC.file = null;

            current.push(log);
            //debug(PRINTF) printf("-log_malloc()\n");
        }


        void log_free(void *p)
        {
            //debug(PRINTF) printf("+log_free(%p)\n", p);

            auto i = current.find(p);
            if (i == ~cast(typeof(i))0)
            {
                debug(PRINTF) printf("free'ing unallocated memory %p\n", p);
            }
            else
                current.remove(i);
            //debug(PRINTF) printf("-log_free()\n");
        }


        void log_collect()
        {
            //debug(PRINTF) printf("+log_collect()\n");
            // Print everything in current that is not in prev

            debug(PRINTF) printf("New pointers this cycle: --------------------------------\n");
            size_t used = 0;
            for (size_t i = 0; i < current.dim; i++)
            {
                auto j = prev.find(current.data[i].p);
                if (j == ~cast(typeof(j))0)
                    current.data[i].print();
                else
                    used++;
            }

            debug(PRINTF) printf("All roots this cycle: --------------------------------\n");
            for (size_t i = 0; i < current.dim; i++)
            {
                void *p;
                size_t j;

                p = current.data[i].p;
                if (!findPool(current.data[i].parent))
                {
                    j = prev.find(current.data[i].p);
                    if (j == ~cast(typeof(j))0)
                        debug(PRINTF) printf("N");
                    else
                        debug(PRINTF) printf(" ");;
                    current.data[i].print();
                }
            }

            debug(PRINTF) printf("Used = %d-------------------------------------------------\n", used);
            prev.copy(&current);

            debug(PRINTF) printf("-log_collect()\n");
        }


        void log_parent(void *p, void *parent)
        {
            //debug(PRINTF) printf("+log_parent()\n");

            auto i = current.find(p);
            if (i == ~cast(typeof(i))0)
            {
                debug(PRINTF) printf("parent'ing unallocated memory %p, parent = %p\n", p, parent);
                Pool *pool;
                pool = findPool(p);
                assert(pool);
                size_t offset = cast(uint)(p - pool.baseAddr);
                size_t biti;
                uint pn = offset / PAGESIZE;
                Bins bin = cast(Bins)pool.pagetable[pn];
                biti = (offset & notbinsize[bin]);
                debug(PRINTF) printf("\tbin = %d, offset = x%x, biti = x%x\n", bin, offset, biti);
            }
            else
            {
                current.data[i].parent = parent;
            }
            //debug(PRINTF) printf("-log_parent()\n");
        }

    }
    else
    {
        void log_init() { }
        void log_malloc(void *p, size_t size) { }
        void log_free(void *p) { }
        void log_collect() { }
        void log_parent(void *p, void *parent) { }
    }
}


/* ============================ Pool  =============================== */


struct Pool
{
    byte* baseAddr;
    byte* topAddr;
    GCBits mark;        // entries already scanned, or should not be scanned
    GCBits scan;        // entries that need to be scanned
    GCBits freebits;    // entries that are on the free list
    GCBits finals;      // entries that need finalizer run on them
    GCBits noscan;      // entries that should not be scanned

    uint npages;
    uint ncommitted;    // ncommitted <= npages
    ubyte* pagetable;


    void initialize(uint npages)
    {
        size_t poolsize;

        //debug(PRINTF) printf("Pool::Pool(%u)\n", npages);
        poolsize = npages * PAGESIZE;
        assert(poolsize >= POOLSIZE);
        baseAddr = cast(byte *)os_mem_map(poolsize);

        // Some of the code depends on page alignment of memory pools
        assert((cast(uint)baseAddr & (PAGESIZE - 1)) == 0);

        if (!baseAddr)
        {
            //debug(PRINTF) printf("GC fail: poolsize = x%x, errno = %d\n", poolsize, errno);
            //debug(PRINTF) printf("message = '%s'\n", sys_errlist[errno]);

            npages = 0;
            poolsize = 0;
        }
        //assert(baseAddr);
        topAddr = baseAddr + poolsize;

        mark.alloc(poolsize / 16);
        scan.alloc(poolsize / 16);
        freebits.alloc(poolsize / 16);
        noscan.alloc(poolsize / 16);

        pagetable = cast(ubyte*)cstdlib.malloc(npages);
        if (!pagetable)
            onOutOfMemoryError();
        cstring.memset(pagetable, B_UNCOMMITTED, npages);

        this.npages = npages;
        ncommitted = 0;
    }


    void Dtor()
    {
        if (baseAddr)
        {
            int result;

            if (ncommitted)
            {
                result = os_mem_decommit(baseAddr, 0, ncommitted * PAGESIZE);
                assert(result == 0);
                ncommitted = 0;
            }

            if (npages)
            {
                result = os_mem_unmap(baseAddr, npages * PAGESIZE);
                assert(result == 0);
                npages = 0;
            }

            baseAddr = null;
            topAddr = null;
        }
        if (pagetable)
            cstdlib.free(pagetable);

        mark.Dtor();
        scan.Dtor();
        freebits.Dtor();
        finals.Dtor();
        noscan.Dtor();
    }


    void Invariant() { }


    invariant()
    {
        //mark.Invariant();
        //scan.Invariant();
        //freebits.Invariant();
        //finals.Invariant();
        //noscan.Invariant();

        if (baseAddr)
        {
            //if (baseAddr + npages * PAGESIZE != topAddr)
                //printf("baseAddr = %p, npages = %d, topAddr = %p\n", baseAddr, npages, topAddr);
            assert(baseAddr + npages * PAGESIZE == topAddr);
            assert(ncommitted <= npages);
        }

        for (uint i = 0; i < npages; i++)
        {   Bins bin = cast(Bins)pagetable[i];

            assert(bin < B_MAX);
        }
    }


    /**
     * Allocate n pages from Pool.
     * Returns ~0u on failure.
     */
    uint allocPages(uint n)
    {
        uint i;
        uint n2;

        //debug(PRINTF) printf("Pool::allocPages(n = %d)\n", n);
        n2 = n;
        for (i = 0; i < ncommitted; i++)
        {
            if (pagetable[i] == B_FREE)
            {
                if (--n2 == 0)
                {   //debug(PRINTF) printf("\texisting pn = %d\n", i - n + 1);
                    return i - n + 1;
                }
            }
            else
                n2 = n;
        }
        return extendPages(n);
    }

    /**
     * Extend Pool by n pages.
     * Returns ~0u on failure.
     */
    uint extendPages(uint n)
    {
        //debug(PRINTF) printf("Pool::extendPages(n = %d)\n", n);
        if (ncommitted + n <= npages)
        {
            uint tocommit;

            tocommit = (n + (COMMITSIZE/PAGESIZE) - 1) & ~(COMMITSIZE/PAGESIZE - 1);
            if (ncommitted + tocommit > npages)
                tocommit = npages - ncommitted;
            //debug(PRINTF) printf("\tlooking to commit %d more pages\n", tocommit);
            //fflush(stdout);
            if (os_mem_commit(baseAddr, ncommitted * PAGESIZE, tocommit * PAGESIZE) == 0)
            {
                cstring.memset(pagetable + ncommitted, B_FREE, tocommit);
                auto i = ncommitted;
                ncommitted += tocommit;

                while (i && pagetable[i - 1] == B_FREE)
                    i--;

                return i;
            }
            //debug(PRINTF) printf("\tfailed to commit %d pages\n", tocommit);
        }

        return ~0u;
    }


    /**
     * Free npages pages starting with pagenum.
     */
    void freePages(uint pagenum, uint npages)
    {
        cstring.memset(&pagetable[pagenum], B_FREE, npages);
    }


    /**
     * Used for sorting pooltable[]
     */
    int opCmp(Pool *p2)
    {
        if (baseAddr < p2.baseAddr)
            return -1;
        else
            return cast(int)(baseAddr > p2.baseAddr);
    }
}


/* ============================ SENTINEL =============================== */


version (SENTINEL)
{
    const size_t SENTINEL_PRE = cast(size_t) 0xF4F4F4F4F4F4F4F4UL;      // 32 or 64 bits
    const ubyte SENTINEL_POST = 0xF5;           // 8 bits
    const uint SENTINEL_EXTRA = 2 * size_t.sizeof + 1;


    size_t* sentinel_size(void *p)  { return &(cast(size_t *)p)[-2]; }
    size_t* sentinel_pre(void *p)   { return &(cast(size_t *)p)[-1]; }
    ubyte* sentinel_post(void *p) { return &(cast(ubyte *)p)[sentinel_size(p)]; }


    void sentinel_init(void *p, size_t size)
    {
        *sentinel_size(p) = size;
        *sentinel_pre(p) = SENTINEL_PRE;
        *sentinel_post(p) = SENTINEL_POST;
    }


    void sentinel_Invariant(void *p)
    {
        assert(*sentinel_pre(p) == SENTINEL_PRE);
        assert(*sentinel_post(p) == SENTINEL_POST);
    }


    void *sentinel_add(void *p)
    {
        return p + 2 * size_t.sizeof;
    }


    void *sentinel_sub(void *p)
    {
        return p - 2 * size_t.sizeof;
    }
}
else
{
    const uint SENTINEL_EXTRA = 0;


    void sentinel_init(void *p, size_t size)
    {
    }


    void sentinel_Invariant(void *p)
    {
    }


    void *sentinel_add(void *p)
    {
        return p;
    }


    void *sentinel_sub(void *p)
    {
        return p;
    }
}

