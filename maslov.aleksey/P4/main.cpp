#include <iostream>
#include "stringManipulator.hpp"

int main()
{
  char * string1 = maslov::inputLine(std::cin, '\n');
  if (string1 == nullptr)
  {
    std::cerr << "Out of memory\n";
    return 1;
  }
  if (string1[0] == '\0')
  {
    delete[] string1;
    return 1;
  }
  const char * string2 = "#f_haRt&$.j)~-+*:@3x";
  std::cout << maslov::excludeCharacters(string1, string2) << "\n";
  delete[] string1;
}
