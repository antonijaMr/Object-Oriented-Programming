#include <iostream>

int main(void)
{
 std::cout << 'a' << std::endl;
 //kompajlira i ispis je 3 ; 3
 int x = 2;
 const float y = x = 3.14;
 std::cout << x << " ; " << y << std::endl;
 std::cout << std::endl;

 std::cout << 'b' << std::endl;
 //kompajlira i ispis je 4,4
 int a = 5;
 std::cout << sizeof(a) << std::endl;
 a = 10024.123;
 std::cout << sizeof(a) << std::endl;
  return 0;
}
