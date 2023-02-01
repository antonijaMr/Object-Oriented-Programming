#include <iostream>
#include <vector>
#include <list>

template<typename T>
void ispisi(const T& niz){
  for(auto e: niz)
    std::cout << e << " "; 
  std::cout << std::endl;
}

int main(void)
{
  std::vector<int> niz1{1,2,3};
  std::list<float> niz2{1.1,2.2,3.3};
  ispisi(niz1);
  ispisi(niz2);
  
  return 0;
}
