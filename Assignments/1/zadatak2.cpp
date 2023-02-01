#include <iostream>

int main(void)
{
  int a;
  std::cout << a << std::endl;
  //1 ako je varijabla neinicijalizirana uzimamo komad memorije koji moze imati bilo koju vrijednost
  //nije eror, program ce se izvrsiti ali ne znamo koja ce vrijednost varijeble biti
  //2
  //std::cout << i << std::endl;
  //EROR
  //ne mozemo koristiri ne deklariranu varijablu
  //kompajler ne cita misli
  //ne znamo tip ni ime ni memoriju ni scope
  //3
  const int c = 5;
  //a = 3;
  //EROR
  //ne mozemo modifikovati konstatne varijable, mozemo ih samo citati
  //4
  // auto t;
  // Eror
  // moramo je inicijalizirati kako bi kompajler mogao prepoznati tip
  //5
  //const int z;
  //EROR
  //ne moze, moramo je inicijalizirati jer ako ne inicijaliziramo imati cemo random, proizvoljnu varijablu
  //koja moze dovesti do nedef. ponasanja
  /*
   * 1 ok
   * 2 x 
   * 3 x
   * 4 x
   * 5 x
   */

  return 0;
}
