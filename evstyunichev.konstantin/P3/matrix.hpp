#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
namespace evstyunichev
{
  int CastToDigit(char *);
  std::istream & Input(std::istream &fin, int *arr, size_t m, size_t n, size_t &read);
  bool IsRowNsm(int *arr, size_t i, size_t n);
  size_t CntRowsNsm(int *arr, size_t m, size_t n);
}
#endif