#pragma once
#include <iostream>
#include <vector>

void unos(std::istream& izvor,std::vector<std::string>& v){
  std::string a;
  while(izvor >> a)
    v.push_back(a);
}

void ispis(const std::vector<std::string>& v){
  for(auto e : v)
    std::cout << e << std::endl;
}

