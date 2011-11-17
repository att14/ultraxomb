
// Copyright (C) 2001-2010 by Digital Mars
// All Rights Reserved
// http://www.digitalmars.com
// Written by Walter Bright

import std.c.string;
import std.c.stdlib;
import std.outofmemory;
import std.intrinsic;

//version = Asm86;
version = bitops;

struct GCBits
{
    alias size_t wordtype;

    const BITS_PER_WORD = (wordtype.sizeof * 8);
    const BITS_SHIFT = (wordtype.sizeof == 8 ? 6 : 5);
    const BITS_MASK = (BITS_PER_WORD - 1);
    const BITS_1 = cast(wordtype)1;

    wordtype*  data = null;
    size_t nwords = 0;    // allocated words in data[] excluding sentinals
    size_t nbits = 0;     // number of bits in data[] excluding sentinals

    void Dtor()
    {
        if (data)
        {
            free(data);
            data = null;
        }
    }

    invariant
    {
        if (data)
        {
            assert(nwords * data[0].sizeof * 8 >= nbits);
        }
    }

    void alloc(size_t nbits)
    {
        this.nbits = nbits;
        nwords = (nbits + (BITS_PER_WORD - 1)) >> BITS_SHIFT;
        data = cast(typeof(data[0])*)calloc(nwords + 2, data[0].sizeof);
        if (!data)
            _d_OutOfMemory();
    }

    wordtype test(size_t i)
    in
    {
        assert(i < nbits);
    }
    body
    {
        //return (cast(bit *)(data + 1))[i];
        return data[1 + (i >> BITS_SHIFT)] & (BITS_1 << (i & BITS_MASK));
    }

    void set(size_t i)
    in
    {
        assert(i < nbits);
    }
    body
    {
        //(cast(bit *)(data + 1))[i] = 1;
        data[1 + (i >> BITS_SHIFT)] |= (BITS_1 << (i & BITS_MASK));
    }

    void clear(size_t i)
    in
    {
        assert(i < nbits);
    }
    body
    {
        //(cast(bit *)(data + 1))[i] = 0;
        data[1 + (i >> BITS_SHIFT)] &= ~(BITS_1 << (i & BITS_MASK));
    }

    wordtype testClear(size_t i)
    {
        version (bitops)
        {
            return std.intrinsic.btr(data + 1, i);   // this is faster!
        }
        else version (D_InlineAsm_X86)
        {
            asm
            {
                naked                   ;
                mov     EAX,data[EAX]   ;
                mov     ECX,i-4[ESP]    ;
                btr     4[EAX],ECX      ;
                sbb     EAX,EAX         ;
                ret     4               ;
            }
        }
        else
        {
            //result = (cast(bit *)(data + 1))[i];
            //(cast(bit *)(data + 1))[i] = 0;

            auto p = &data[1 + (i >> BITS_SHIFT)];
            auto mask = (BITS_1 << (i & BITS_MASK));
            auto result = *p & mask;
            *p &= ~mask;
            return result;
        }
    }

    void zero()
    {
        memset(data + 1, 0, nwords * wordtype.sizeof);
    }

    void copy(GCBits *f)
    in
    {
        assert(nwords == f.nwords);
    }
    body
    {
        memcpy(data + 1, f.data + 1, nwords * wordtype.sizeof);
    }

    wordtype* base()
    in
    {
        assert(data);
    }
    body
    {
        return data + 1;
    }
}

unittest
{
    GCBits b;

    b.alloc(786);
    assert(b.test(123) == 0);
    assert(b.testClear(123) == 0);
    b.set(123);
    assert(b.test(123) != 0);
    assert(b.testClear(123) != 0);
    assert(b.test(123) == 0);

    b.set(785);
    b.set(0);
    assert(b.test(785) != 0);
    assert(b.test(0) != 0);
    b.zero();
    assert(b.test(785) == 0);
    assert(b.test(0) == 0);

    GCBits b2;
    b2.alloc(786);
    b2.set(38);
    b.copy(&b2);
    assert(b.test(38) != 0);
    b2.Dtor();

    b.Dtor();
}

/+
void main()
{
}
+/
