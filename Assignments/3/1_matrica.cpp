#include "1_matrica.hpp"
#include <iostream>
#include <vector>

using matrica =  std::vector<std::vector<int>>;

int main()
{
  matrica matrix;
  matrica m;

  matrix = kreirajmatricu(3);
  m = kreirajmatricu(3);

  matrica rez = saberimatrice(matrix,m);

  for(auto v: rez){
    for(auto e : v)
      std::cout << e << " ";
    std::cout << std::endl;
  }


  std::cout << "Glavna dijagonala: ";
  glavnadijagonala(rez);
  std::cout << "Sporedna dijagonala: ";
  sporednadijagonala(rez);
  
  return 0;
}
