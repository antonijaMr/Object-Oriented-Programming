#include <iostream>

auto face = "\342\230\272 ";
std::string heart=  "\xe2\x99\xa5";


int main(void)
{
  unsigned int n;
  std::cin >> n;
  std::cout << std::endl;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << face << " ";
    }
    std::cout << std::endl;
  }
 
  return 0;
}
