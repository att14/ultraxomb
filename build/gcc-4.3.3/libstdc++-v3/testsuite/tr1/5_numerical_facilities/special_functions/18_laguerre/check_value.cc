// 2007-02-04  Edward Smith-Rowland <3dw4rd@verizon.net>
//
// Copyright (C) 2007 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

//  laguerre


//  Compare against values generated by the GNU Scientific Library.
//  The GSL can be found on the web: http://www.gnu.org/software/gsl/

#include <tr1/cmath>
#if defined(__TEST_DEBUG)
#include <iostream>
#define VERIFY(A) \
if (!(A)) \
  { \
    std::cout << "line " << __LINE__ \
      << "  max_abs_frac = " << max_abs_frac \
      << std::endl; \
  }
#else
#include <testsuite_hooks.h>
#endif
#include "../testcase.h"


// Test data for n=0.
testcase_laguerre<double> data001[] = {
  { 1.0000000000000000, 0, 0.0000000000000000 },
  { 1.0000000000000000, 0, 5.0000000000000000 },
  { 1.0000000000000000, 0, 10.000000000000000 },
  { 1.0000000000000000, 0, 15.000000000000000 },
  { 1.0000000000000000, 0, 20.000000000000000 },
  { 1.0000000000000000, 0, 25.000000000000000 },
  { 1.0000000000000000, 0, 30.000000000000000 },
  { 1.0000000000000000, 0, 35.000000000000000 },
  { 1.0000000000000000, 0, 40.000000000000000 },
  { 1.0000000000000000, 0, 45.000000000000000 },
  { 1.0000000000000000, 0, 50.000000000000000 },
  { 1.0000000000000000, 0, 55.000000000000000 },
  { 1.0000000000000000, 0, 60.000000000000000 },
  { 1.0000000000000000, 0, 65.000000000000000 },
  { 1.0000000000000000, 0, 70.000000000000000 },
  { 1.0000000000000000, 0, 75.000000000000000 },
  { 1.0000000000000000, 0, 80.000000000000000 },
  { 1.0000000000000000, 0, 85.000000000000000 },
  { 1.0000000000000000, 0, 90.000000000000000 },
  { 1.0000000000000000, 0, 95.000000000000000 },
  { 1.0000000000000000, 0, 100.00000000000000 },
};

// Test function for n=0.
template <typename Tp>
void test001()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data001)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data001[i].n), Tp(data001[i].x));
      const Tp f0 = data001[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for n=1.
testcase_laguerre<double> data002[] = {
  { 1.0000000000000000, 1, 0.0000000000000000 },
  { -4.0000000000000000, 1, 5.0000000000000000 },
  { -9.0000000000000000, 1, 10.000000000000000 },
  { -14.000000000000000, 1, 15.000000000000000 },
  { -19.000000000000000, 1, 20.000000000000000 },
  { -24.000000000000000, 1, 25.000000000000000 },
  { -29.000000000000000, 1, 30.000000000000000 },
  { -34.000000000000000, 1, 35.000000000000000 },
  { -39.000000000000000, 1, 40.000000000000000 },
  { -44.000000000000000, 1, 45.000000000000000 },
  { -49.000000000000000, 1, 50.000000000000000 },
  { -54.000000000000000, 1, 55.000000000000000 },
  { -59.000000000000000, 1, 60.000000000000000 },
  { -64.000000000000000, 1, 65.000000000000000 },
  { -69.000000000000000, 1, 70.000000000000000 },
  { -74.000000000000000, 1, 75.000000000000000 },
  { -79.000000000000000, 1, 80.000000000000000 },
  { -84.000000000000000, 1, 85.000000000000000 },
  { -89.000000000000000, 1, 90.000000000000000 },
  { -94.000000000000000, 1, 95.000000000000000 },
  { -99.000000000000000, 1, 100.00000000000000 },
};

// Test function for n=1.
template <typename Tp>
void test002()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data002)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data002[i].n), Tp(data002[i].x));
      const Tp f0 = data002[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for n=2.
testcase_laguerre<double> data003[] = {
  { 1.0000000000000000, 2, 0.0000000000000000 },
  { 3.5000000000000000, 2, 5.0000000000000000 },
  { 31.000000000000000, 2, 10.000000000000000 },
  { 83.500000000000000, 2, 15.000000000000000 },
  { 161.00000000000000, 2, 20.000000000000000 },
  { 263.50000000000000, 2, 25.000000000000000 },
  { 391.00000000000000, 2, 30.000000000000000 },
  { 543.50000000000000, 2, 35.000000000000000 },
  { 721.00000000000000, 2, 40.000000000000000 },
  { 923.50000000000000, 2, 45.000000000000000 },
  { 1151.0000000000000, 2, 50.000000000000000 },
  { 1403.5000000000000, 2, 55.000000000000000 },
  { 1681.0000000000000, 2, 60.000000000000000 },
  { 1983.5000000000000, 2, 65.000000000000000 },
  { 2311.0000000000000, 2, 70.000000000000000 },
  { 2663.5000000000000, 2, 75.000000000000000 },
  { 3041.0000000000000, 2, 80.000000000000000 },
  { 3443.5000000000000, 2, 85.000000000000000 },
  { 3871.0000000000000, 2, 90.000000000000000 },
  { 4323.5000000000000, 2, 95.000000000000000 },
  { 4801.0000000000000, 2, 100.00000000000000 },
};

// Test function for n=2.
template <typename Tp>
void test003()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data003)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data003[i].n), Tp(data003[i].x));
      const Tp f0 = data003[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for n=5.
testcase_laguerre<double> data004[] = {
  { 1.0000000000000000, 5, 0.0000000000000000 },
  { -3.1666666666666665, 5, 5.0000000000000000 },
  { 34.333333333333329, 5, 10.000000000000000 },
  { -355.25000000000000, 5, 15.000000000000000 },
  { -4765.6666666666670, 5, 20.000000000000000 },
  { -23040.666666666664, 5, 25.000000000000000 },
  { -74399.000000000000, 5, 30.000000000000000 },
  { -190559.41666666663, 5, 35.000000000000000 },
  { -418865.66666666663, 5, 40.000000000000000 },
  { -825411.50000000000, 5, 45.000000000000000 },
  { -1498165.6666666665, 5, 50.000000000000000 },
  { -2550096.9166666670, 5, 55.000000000000000 },
  { -4122299.0000000000, 5, 60.000000000000000 },
  { -6387115.6666666670, 5, 65.000000000000000 },
  { -9551265.6666666679, 5, 70.000000000000000 },
  { -13858967.750000000, 5, 75.000000000000000 },
  { -19595065.666666664, 5, 80.000000000000000 },
  { -27088153.166666668, 5, 85.000000000000000 },
  { -36713699.000000000, 5, 90.000000000000000 },
  { -48897171.916666657, 5, 95.000000000000000 },
  { -64117165.666666664, 5, 100.00000000000000 },
};

// Test function for n=5.
template <typename Tp>
void test004()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data004)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data004[i].n), Tp(data004[i].x));
      const Tp f0 = data004[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for n=10.
testcase_laguerre<double> data005[] = {
  { 1.0000000000000000, 10, 0.0000000000000000 },
  { 1.7562761794532620, 10, 5.0000000000000000 },
  { 27.984126984126981, 10, 10.000000000000000 },
  { -237.51841517857147, 10, 15.000000000000000 },
  { 3227.8077601410932, 10, 20.000000000000000 },
  { -45786.199797453693, 10, 25.000000000000000 },
  { 15129.571428571489, 10, 30.000000000000000 },
  { 7764800.8179494590, 10, 35.000000000000000 },
  { 79724066.608465582, 10, 40.000000000000000 },
  { 469865425.65122765, 10, 45.000000000000000 },
  { 2037190065.3738980, 10, 50.000000000000000 },
  { 7187828002.9825764, 10, 55.000000000000000 },
  { 21804200401.000000, 10, 60.000000000000000 },
  { 58854343015.616211, 10, 65.000000000000000 },
  { 144688291819.51855, 10, 70.000000000000000 },
  { 329425241736.70038, 10, 75.000000000000000 },
  { 703324772760.08276, 10, 80.000000000000000 },
  { 1421627560118.6157, 10, 85.000000000000000 },
  { 2741055412243.8569, 10, 90.000000000000000 },
  { 5071986977681.8652, 10, 95.000000000000000 },
  { 9051283795429.5723, 10, 100.00000000000000 },
};

// Test function for n=10.
template <typename Tp>
void test005()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data005)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data005[i].n), Tp(data005[i].x));
      const Tp f0 = data005[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(5.0000000000000039e-13));
}

// Test data for n=20.
testcase_laguerre<double> data006[] = {
  { 1.0000000000000000, 20, 0.0000000000000000 },
  { 2.0202257444769129, 20, 5.0000000000000000 },
  { -11.961333867812119, 20, 10.000000000000000 },
  { -50.151037960139455, 20, 15.000000000000000 },
  { 2829.4728613531738, 20, 20.000000000000000 },
  { -11583.947899113535, 20, 25.000000000000000 },
  { -18439.424502520938, 20, 30.000000000000000 },
  { -38838.223606979467, 20, 35.000000000000000 },
  { 24799805.877530701, 20, 40.000000000000000 },
  { -673953823.59913290, 20, 45.000000000000000 },
  { 7551960453.7672529, 20, 50.000000000000000 },
  { 31286508510.614754, 20, 55.000000000000000 },
  { -1379223608444.9155, 20, 60.000000000000000 },
  { -6692517968212.9727, 20, 65.000000000000000 },
  { 165423821874449.94, 20, 70.000000000000000 },
  { 3082390018008546.5, 20, 75.000000000000000 },
  { 29500368536981676., 20, 80.000000000000000 },
  { 2.0353526354974186e+17, 20, 85.000000000000000 },
  { 1.1292309514432899e+18, 20, 90.000000000000000 },
  { 5.3239262855563100e+18, 20, 95.000000000000000 },
  { 2.2061882785931735e+19, 20, 100.00000000000000 },
};

// Test function for n=20.
template <typename Tp>
void test006()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data006)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data006[i].n), Tp(data006[i].x));
      const Tp f0 = data006[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(1.0000000000000008e-12));
}

// Test data for n=50.
testcase_laguerre<double> data007[] = {
  { 1.0000000000000000, 50, 0.0000000000000000 },
  { 1.4735258819430563, 50, 5.0000000000000000 },
  { 17.534183446338233, 50, 10.000000000000000 },
  { -195.62436619077388, 50, 15.000000000000000 },
  { 980.26961889790766, 50, 20.000000000000000 },
  { 24812.277673870871, 50, 25.000000000000000 },
  { 293000.50735962350, 50, 30.000000000000000 },
  { 2316195.5013375296, 50, 35.000000000000000 },
  { -14896937.968694847, 50, 40.000000000000000 },
  { -502066598.00813466, 50, 45.000000000000000 },
  { 2513677852.6916885, 50, 50.000000000000000 },
  { 45129675503.538948, 50, 55.000000000000000 },
  { -883876565337.99207, 50, 60.000000000000000 },
  { 9361319947203.8379, 50, 65.000000000000000 },
  { -80967880733583.219, 50, 70.000000000000000 },
  { 717391079438942.88, 50, 75.000000000000000 },
  { -8217471769564850.0, 50, 80.000000000000000 },
  { 1.2595276229009984e+17, 50, 85.000000000000000 },
  { -2.1140031308048906e+18, 50, 90.000000000000000 },
  { 3.2438187475835138e+19, 50, 95.000000000000000 },
  { -3.9710103487094673e+20, 50, 100.00000000000000 },
};

// Test function for n=50.
template <typename Tp>
void test007()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data007)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data007[i].n), Tp(data007[i].x));
      const Tp f0 = data007[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

// Test data for n=100.
testcase_laguerre<double> data008[] = {
  { 1.0000000000000000, 100, 0.0000000000000000 },
  { 1.4555271625328832, 100, 5.0000000000000000 },
  { 13.277662844303402, 100, 10.000000000000000 },
  { 91.737038454342013, 100, 15.000000000000000 },
  { 1854.0367283243393, 100, 20.000000000000000 },
  { -11281.698886837237, 100, 25.000000000000000 },
  { 170141.86987046539, 100, 30.000000000000000 },
  { -2950092.7025822792, 100, 35.000000000000000 },
  { -7272442.3156007063, 100, 40.000000000000000 },
  { 295697471.90876174, 100, 45.000000000000000 },
  { 4847420871.2690468, 100, 50.000000000000000 },
  { 59406998102.392273, 100, 55.000000000000000 },
  { 693492765740.29736, 100, 60.000000000000000 },
  { 6606192010150.3096, 100, 65.000000000000000 },
  { 17125518672239.707, 100, 70.000000000000000 },
  { -870493767065151.38, 100, 75.000000000000000 },
  { -13763178176383754., 100, 80.000000000000000 },
  { 30667078414479724., 100, 85.000000000000000 },
  { 2.1307220490380198e+18, 100, 90.000000000000000 },
  { -7.2706523009007862e+18, 100, 95.000000000000000 },
  { -2.6292260693068920e+20, 100, 100.00000000000000 },
};

// Test function for n=100.
template <typename Tp>
void test008()
{
  const Tp eps = std::numeric_limits<Tp>::epsilon();
  Tp max_abs_diff = -Tp(1);
  Tp max_abs_frac = -Tp(1);
  unsigned int num_datum = sizeof(data008)
                         / sizeof(testcase_laguerre<double>);
  for (unsigned int i = 0; i < num_datum; ++i)
    {
      const Tp f = std::tr1::laguerre(Tp(data008[i].n), Tp(data008[i].x));
      const Tp f0 = data008[i].f0;
      const Tp diff = f - f0;
      if (std::abs(diff) > max_abs_diff)
        max_abs_diff = std::abs(diff);
      if (std::abs(f0) > Tp(10) * eps
       && std::abs(f) > Tp(10) * eps)
        {
          const Tp frac = diff / f0;
          if (std::abs(frac) > max_abs_frac)
            max_abs_frac = std::abs(frac);
        }
    }
  VERIFY(max_abs_frac < Tp(2.5000000000000020e-13));
}

int main(int, char**)
{
  test001<double>();
  test002<double>();
  test003<double>();
  test004<double>();
  test005<double>();
  test006<double>();
  test007<double>();
  test008<double>();
  return 0;
}
