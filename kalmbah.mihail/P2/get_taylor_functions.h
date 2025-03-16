#ifndef GET_TAYLOR_FUNCTIONS_H
#define GET_TAYLOR_FUNCTIONS_H

#include <cstddef>

namespace kalmbah {
  unsigned long long computeFactorial(size_t n);
  double computeArcsinTaylor(double x, size_t n, double error);
  double computeArctanTaylor(double x, size_t n, double error);
}

#endif
