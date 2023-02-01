#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <iterator>

struct Predmet {
  std::string naziv;
  std::string odsjek;

  //problem
  void unos();

  bool operator==(const Predmet& o)const{
    if(naziv == o.naziv && odsjek == o.odsjek) return true;
    else return false;
  }
};

struct OcjenaIzPredmeta {
  int ocjena;
  std::list<Predmet>::const_iterator predmet;

  void unos(std::list<Predmet>& listaPr);
};

struct Student {
  int brojIndeksa;
  std::string ime;
  std::string prezime;
  std::string grad;
  std::vector<OcjenaIzPredmeta> ocjene;

  void unos();
  void ispis()const;
  void dodajOcjenu(const OcjenaIzPredmeta& o);
};


void ispisMape(const std::map<int, Student>& mapa);
void ispisListe(const std::list<Predmet>& lista);
int meni();
bool findPr(const Predmet& p,const std::list<Predmet>& l);
//unesi ocjenu ima problem
void unesiOcjenu(Student& s,const std::list<Predmet>& lista);
void ispisOiP(const Student& s);
void ispisiPredmete(const std::list<Predmet>& l);
std::list<Predmet>::const_iterator vratiAdresuPredmeta(const std::list<Predmet>& l,const Predmet& p);
 







