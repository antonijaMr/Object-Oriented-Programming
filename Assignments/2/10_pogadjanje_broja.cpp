#include <iostream>

int main(void)
{
  int broj;
  int brojac = 0;
  int random_broj;
  random_broj = rand() % 100 + 1;
  std::cout << "Unesite broj: " << std::endl;
  while(std::cin >> broj && brojac <4){
    if(broj == random_broj){
      std::cout << "Cestitam pogodili ste broj!" << std::endl;
      break;
    }else if(broj > random_broj){
      std::cout << "Zamisljeni broj je manji." << std::endl;
    }else if(broj < random_broj){
      std::cout << "Zamisljeni broj je veci." << std::endl;
    }
    ++brojac;
    std::cout << "Unesite broj: " << std::endl;
  }
  if(brojac >= 4){
    std::cout << "Nazalost niste pogodili broj :(" << std::endl;
    std::cout << ".......sad life :.(............" << std::endl;
  }
  return 0;
}
