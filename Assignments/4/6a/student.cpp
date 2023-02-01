#include "student.hpp"

void Student::unos(){
  std::cout << "Unesite broj indeksa: ";
  std::cin >> brojIndeksa;
  std::cin.ignore(100,'\n');
  std::cout << "Unesite ime: ";
  std::getline(std::cin,ime,'\n');
  std::cout << "Unesite prezime: ";
  std::getline(std::cin,prezime,'\n');
  std::cout << "Unesite grad: ";
  std::getline(std::cin,grad,'\n');
}

void Student::ispis()const{
  std::cout << brojIndeksa << " " << ime << " "
            << prezime << " " << grad << std::endl;
}

void Student::dodajOcjenu(const OcjenaIzPredmeta& o){
  ocjene.push_back(o);
}

//problem
void Predmet::unos(){
  std::cout << "Unesite ime predmeta: ";
  std::getline(std::cin,naziv, '\n'); 
  std::cout << "Unesite odsjek: ";
  std::getline(std::cin,odsjek, '\n'); 
}

void OcjenaIzPredmeta::unos(std::list<Predmet>& listaPr){
  int n;
  std::cout << "Unesite ocjenu: " << std::endl;
  std::cin >> n;
  if(n >= 5 && n <= 10) ocjena = n; 
  else throw std::string{"Nevazeca ocjena"};
  std::cout << "Unesite ime predmeta: " << std::endl;
  Predmet p;
  p.unos();
  predmet = vratiAdresuPredmeta(listaPr,p); 
}

void ispisMape(const std::map<int, Student>& mapa){
   for(auto e : mapa){
     (e.second).ispis();
   }
 }

void ispisListe(const std::list<Predmet>& lista){
  for(auto e :lista)
    std::cout << e.naziv << " - " << e.odsjek << std::endl;
}

int meni(){
  int i;
  std::cout << "Izaberite jednu opciju:" << std::endl;
  std::cout << "1. Dodavanje studenata" << std::endl;
  std::cout << "2. Dodavanje predmeta" << std::endl;
  std::cout << "3. Dodavanje ocjena" << std::endl;
  std::cout << "4. Ispis svih studenta" << std::endl;
  std::cout << "5. Ispis svih predmeta" << std::endl;
  std::cout << "6. Ispis predmeta i ocjena" << std::endl;
  std::cout << "7. Edit" << std::endl;
  std::cout << "8. Odjava" << std::endl;
  std::cin >> i;
  if( i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7) return i;
  else return 0;
}

bool findPr(const Predmet& p,const std::list<Predmet>& l){
  for(auto e: l){
    if(e.naziv == p.naziv)
      return true;
  }
  return false;
}


void ispisiPredmete(const std::list<Predmet>& l){
  for(int i = 0;i < l.size(); ++i)
    std::cout << i+1 << ". l.at(i)" << std::endl;
}

std::list<Predmet>::const_iterator vratiAdresuPredmeta(const std::list<Predmet>& l,const Predmet& p){
  for(auto it = l.begin();it != l.end();++it){
    if( (*it) == p){
      return it;
    }
  }
  return l.end();
}

void ispisOiP(const Student& s){
  std::cout << s.ime << " " << s.prezime<< std::endl;
  for(auto e : s.ocjene){
    std::cout << (e.predmet)->naziv << e.ocjena << std::endl;
  }
}

void unesiOcjenu(Student& s,std::list<Predmet>& lista){
  OcjenaIzPredmeta o;
  o.unos(lista);
  s.dodajOcjenu(o);
}


