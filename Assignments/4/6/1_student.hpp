#pragma once
#include <list>
#include <map>
#include <vector>
#include <iostream>

struct Predmet {
  std::string naziv;
  std::string odsjek;

  void unos();
};

struct OcjenaIzPredmeta {
  int ocjena;
  std::list<Predmet>::const_iterator predmet;
};
struct Student {
  int brojIndeksa;
  std::string ime;
  std::string prezime;
  std::string grad;
  std::vector<OcjenaIzPredmeta> ocjene;

  void unos();
  void ispis();
};

void Student::unos(){
  std::cout << "Unesite broj indeksa, ime, prezime i grad: " << std::endl;
  std::cin >> brojIndeksa;
  std::cin.ignore(100,'\n');
  std::getline(std::cin,ime,'\n');
  std::getline(std::cin,prezime,'\n');
  std::getline(std::cin,grad,'\n');
}
void Student::ispis(){
  std::cout << brojIndeksa << " " << ime << " "
            << prezime << " " << grad << std::endl;
}

void Predmet::unos(){
  std::cout << "Unesite ime predmete" << std::endl;
  std::getline(std::cin,naziv, '\n'); 
  std::cout << "Unesite odsjek" << std::endl;
  std::getline(std::cin,odsjek, '\n'); 
}

bool uslov(int n){
  return (n>0 && n <10) ? true : false;
}

int meni(){
  int n{0};
  do{
    std::cout << "Izaberite opciju" << std::endl;
    std::cout <<"\t1 Unos studenta"<< std::endl;
    // std::cout <<"\t2 Evidencija studenata"<< std::endl;
    // std::cout <<"\t3 Evidencija predmeta"<< std::endl;
    // std::cout <<"\t4 Evidencija ocjena"<< std::endl;
    std::cout <<"\t5 Dodavanje novih predmeta"<< std::endl;
    std::cout <<"\t6 Dodavanje studenata"<< std::endl;
    // std::cout <<"\t7 Editovanje studenta"<< std::endl;
    // std::cout <<"\t8 Ispis studenata"<< std::endl;
    std::cout <<"\t9 Kraj" << std::endl;
    std::cout << "\tVas unos: ";
  }while(std::cin >> n && (!uslov(n)));
  if(uslov(n)) return n;
  else throw std::string{"Pogresan Unos"};
}

// void ispisStudenata(const std::map<int, Student>& mapa){
//   for(auto e : mapa){
//     (e.second).ispis();
//   }
// }
