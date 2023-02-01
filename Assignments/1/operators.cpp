#include <iostream>
int main(void)
{
  auto y = 0x21;
  std::cout << y << std::endl;
  auto z = 15 & 2;
  std::cout << z << std::endl;
  std::cout << (33 >> 2) << std::endl;
  auto x = 0x21 >> 15&2;
  std::cout << x << std::endl; 
  return 0;
}
