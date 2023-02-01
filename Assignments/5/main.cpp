#include"mojInt.hpp" 

int main(void)
{
  MojNizInt b{1,1,1,10};
  b.push_back(1);
  // b.push_back(2);
  // b.push_back(2);
  // b.push_back(2);
  std::cout << b << std::endl;
  std::cout << b.size() << std::endl;
  return 0;
}

