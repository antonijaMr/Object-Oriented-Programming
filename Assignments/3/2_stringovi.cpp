#include <iostream>

template<typename T, typename U>
T suma(T a, T b, U c = 1){
  T novi = a+b;
  T Novi{};
  while(c){
    Novi += novi;
    --c;
  }
  return Novi;
}

int main(void){
  std::cout << suma(1,2,3) << std::endl; //(1+2)*3
  std::cout << suma(std::string("abc"),std::string("d"),3) <<std::endl; //abcd'abcd'abcd
  std::cout << suma(2.0,2.1,7) << std::endl;
  return 0;
}
