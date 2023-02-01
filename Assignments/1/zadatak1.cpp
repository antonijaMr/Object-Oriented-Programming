#include <iostream>

int main(void)
{
 char c;
 int i;
 double d;
 float f;
 bool b;
 std::cout << sizeof(c) << std::endl;
 std::cout << sizeof(i) << std::endl;
 std::cout << sizeof(d) << std::endl;
 std::cout << sizeof(f) << std::endl;
 std::cout << sizeof(b) << std::endl;
 std::cout << std::endl;

 //inicijalizacija
 char ci  = 'a';
 int ii = 1;
 double di = 3.3;
 float fi = 3.3;
 bool bi = 1;
 std::cout << sizeof(ci) << std::endl;
 std::cout << sizeof(ii) << std::endl;
 std::cout << sizeof(di) << std::endl;
 std::cout << sizeof(fi) << std::endl;
 std::cout << sizeof(bi) << std::endl;
  return 0;
}
