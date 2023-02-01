#include <iostream>
#include <vector>
#include "7_vektor.hpp"

int main(void)
{
  vector brojevi;
  insert(brojevi);

  std::cout << std::endl;
  if(!brojevi.empty()){
    swap(brojevi);
    ispisiVektor(brojevi);
    minElement(brojevi);
    maxElement(brojevi);
    suma(brojevi);
    proizvod(brojevi);
  }else
    std::cout << "Unijeli ste prazan niz" << std::endl;

}
