#include <iostream>
int main(void)
{
  int x = 1;
  int z = 1;
  std::cout << x++ << std::endl;
  std::cout << x << std::endl;
  std::cout << ++z << std::endl;
  std::cout << z << std::endl;
  return 0;
}
