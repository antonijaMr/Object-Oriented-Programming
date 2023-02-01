#include <iostream>
int main(void)
{
  auto a = 2.0f*2.0*4;//double 16
  std::cout << a << std::endl;
  std::cout << typeid(a).name() << std::endl;

  auto b = (int)(2.0f*2.0*4);//int 16
  std::cout << b << std::endl;
  std::cout << typeid(b).name() << std::endl;

  auto c = 2.0f*(int)2.0*4;//float 16 
  std::cout << c << std::endl;
  std::cout << typeid(c).name() << std::endl;
  
  auto d = 2/10;//int 0
  std::cout << d << std::endl;
  std::cout << typeid(d).name() << std::endl;

  auto e = 2.0/10*1.0f;//2.0/10.0 * 1.0f -> double 0.2
  std::cout << "e " << e << std::endl;
  std::cout << typeid(e).name() << std::endl;

  auto f = 0;//int 0
  std::cout << "f " << f << std::endl;
  std::cout << typeid(f).name() << std::endl;

  auto g = 42 + 0x2a + 052;//42 + 2*16 + 10 + 42 -> 42 + 42 + 42 -> 126 int 
  std::cout << g << std::endl;
  std::cout << typeid(g).name() << std::endl;

 
  return 0;
}
