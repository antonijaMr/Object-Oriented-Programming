#include "5_radnik.hpp"

void unos(Radnik& a){
  std::cout << "Ime, prezime, godina rodjenja, mjesto stanovanja i plata: ";
  std::cin >> a.ime >> a.prezime >> a.godinaRodjenja >> a.mjesto_stanovanja >> a.plata;
}
void ispis(const Radnik& a){
  std::cout << a.ime << " " 
            << a.prezime << " " 
            << a.godinaRodjenja << " " 
            << a.mjesto_stanovanja << " " 
            << a.plata << std::endl;
}


