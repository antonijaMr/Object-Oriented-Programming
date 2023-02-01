#pragma once
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

void unos(Radnik& a);
void ispis(const Radnik& a);

auto poPlati = [](const Radnik& a, const Radnik& b){
  if(a.plata != b.plata)
    return a.plata > b.plata;
  else if(a.ime != b.ime)
    return a.ime < b.ime;
  else if(a.godinaRodjenja != b.godinaRodjenja)
    return a.godinaRodjenja < b.godinaRodjenja;
  };

