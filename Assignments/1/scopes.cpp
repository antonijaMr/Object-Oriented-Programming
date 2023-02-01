#include <iostream>
int main(void)
{
  int x = 2; 
  {
    int x = 3;
    x = 1;
  }
  std::cout << x << std::endl;
  return 0;
}

// print 2
// x in unutrasnjeg bloka nestaje/brise se izmemorije nakon izvrsenja tog
// bloka odnosno nakon }
// tako da je vidljivo samo x = 2
