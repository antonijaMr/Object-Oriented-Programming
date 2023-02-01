#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Radnik{
  std::string ime;
  std::string prezime;
  int godinaRodjenja;
  std::string mjesto_stanovanja;
  long plata;
};

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

  auto poPlati = [](const Radnik& a, const Radnik& b){
    if(a.plata != b.plata)
      return a.plata > b.plata;
    else if(a.ime != b.ime)
      return a.ime < b.ime;
    else if(a.godinaRodjenja != b.godinaRodjenja)
      return a.godinaRodjenja < b.godinaRodjenja;
  };

  std::sort(radnici.begin(),radnici.end(),poPlati);

  for(auto e : radnici)
    ispis(e);
}
