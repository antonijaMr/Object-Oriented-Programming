#include <iostream>
#include <math.h>

int main(void)
{
  int option = 0;
  std::cout << "1. Provjera trougla" << std::endl;
  std::cout << "2. Ispis svih mogucih trugla" << std::endl;
  std::cout << "Unesite opciju koju zelite: ";
  std::cin >> option;
  if(option == 1){
    int a,b,c;
    std::cout << "Unesite stranica trugla za koji zelite proracun: "; 
    std::cin >> a >> b >> c;
    if(a*a + b*b == c*c){
      std::cout << "Trougao (" << a << ", " << b << ", " << c << ") je pravougli" << std::endl;
    }else{
      std::cout << "Trugao nije pravougli" << std::endl;
    }
  }else if(option == 2){
    int num;
    std::cout << "Unesite broj za koji zelite proracun: ";
    std::cin >> num;
    int x;
    int brojac = 0;
    for(int i = 1; i< num; ++i){
      for( int j = 1; j < i; j++){
        x = sqrt(i*i + j*j); 
        ++brojac;
        if(sqrt(i*i + j*j) == x)
          std::cout << j << " "<< i << " " << x << std::endl;
      }
    }
    std::cout << "brojac : "<< brojac << std::endl;
  }else
    std::cout << "Pogresan unos!" << std::endl;
  return 0;
}
