#pragma once
#include <iostream>

void funkcija(std::string& a, char b, int c){
  std::string s(c,b);
  a = s + a;
}

void funkcija(std::string& a, int c){
  std::string s(c,' ');
  a = s + a;
}


