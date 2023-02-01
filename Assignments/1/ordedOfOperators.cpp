#include <iostream>
int main(void)
{
  int x = 10;
  int y = 9;
  std::cout << x << " ; " << y << std::endl;//10 ; 9
  x++; //x = 11
  --y; //y= 8
  std::cout << x << " ; " << y << std::endl;//11 ; 8 
  x+=2; // x = 11 + 2 = 13 
  y = ++x;// y = 14, x = 14
  y -= x++;// y = y - (14 ) = 14 - 14 = 0, x = 15
  std::cout << x << " ; " << y << std::endl;//15 ; 0
  x = (y+2)*2/2;// x = (0+2)*2/2 = 2 * 1 = 2 ili =(2*2)/2 = 4/2 = 2 
  y = y;//y = 0
  std::cout << x << " ; " << y << std::endl;//2 ; 0 
  return 0;
}
