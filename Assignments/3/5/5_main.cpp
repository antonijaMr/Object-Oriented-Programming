#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "5_radnik.hpp" 

int main(void)
{
  std::vector<Radnik> radnici;
  Radnik prvi;
  std::cout << "Koliko radnika zelite unijeti: ";
  int n;
  std::cin >> n;
  for(int i =0; i< n; ++i){
    unos(prvi);
    radnici.push_back(prvi);
    }
  std::sort(radnici.begin(),radnici.end(),poPlati);

  for(auto e : radnici)
    ispis(e);
  return 0;
}
