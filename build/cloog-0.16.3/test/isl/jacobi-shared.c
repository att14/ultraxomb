/* Generated from ../../../git/cloog/test/isl/jacobi-shared.cloog by CLooG 0.16.2-19-gfcd8fdc gmp bits in 1.65s. */
if ((h0+1)%2 == 0) {
  if ((16*floord(g1+t0-3,16) >= -N+g1+t0+1) && (16*floord(N+15*g1+15*t0+15,16) >= 16*g1+15*t0+17) && (floord(t1-1,32) <= floord(g2+t1-3,32)) && (32*floord(t1-1,32) >= -N+g2+t1+1)) {
    for (c0=max(-16*floord(t0-1,16)+t0,-16*floord(g1+t0-3,16)+t0);c0<=min(32,N-g1-1);c0+=16) {
      c1 = -32*floord(t1-1,32)+t1;
      if (c1 <= 32) {
        S1(c0+g1-1,c1+g2-1);
      }
    }
  }
}
