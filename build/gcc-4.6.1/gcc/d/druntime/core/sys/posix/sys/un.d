/**
 * D header file for POSIX.
 *
 * Copyright: Copyright Sean Kelly 2005 - 2009.
 * License:   <a href="http://www.boost.org/LICENSE_1_0.txt">Boost License 1.0</a>.
 * Authors:   Sean Kelly
 * Standards: The Open Group Base Specifications Issue 6, IEEE Std 1003.1, 2004 Edition
 */

/*          Copyright Sean Kelly 2005 - 2009.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */
module core.sys.posix.sys.un;

public import core.sys.posix.sys.socket: sa_family_t;

extern(C):

//
// Required
//
/*
struct sockaddr_un
{
    sa_family_t sun_family;
    char        sa_data[];
}

sa_family_t    // From core.sys.posix.sys.socket
*/

version( linux )
{
    struct sockaddr_un
    {
        sa_family_t sun_family;
        byte[108]   sun_path;
    }
}
else version( OSX )
{
    struct sockaddr_un
    {
        ubyte       sun_len;
        sa_family_t sun_family;
        byte[104]   sun_path;
    }
}
else version( FreeBSD )
{
    struct sockaddr_un
    {
        ubyte       sun_len;
        sa_family_t sun_family;
        byte[104]   sun_path;
    }
}
