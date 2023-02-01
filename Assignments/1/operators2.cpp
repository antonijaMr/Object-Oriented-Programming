
#include <iostream>
int main(int argc, char *argv[])
{
  auto b = 1+2+3+2.1f+2.0;
  std::cout << typeid(b).name() << std::endl;
  std::cout << "b" << b << std::endl;

  int x = 0;
  x++;
  --x;
  x+=1;
  x = x+1;
  x = 1-x*2;
  std::cout << "x" << x << std::endl;
  int y=10;
  std::cout << ++y << std::endl;
  return 0;
}
