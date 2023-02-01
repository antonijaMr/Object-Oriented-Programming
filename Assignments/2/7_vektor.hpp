#pragma once
#include <iostream>
#include <vector>

typedef std::vector<int> vector;

void insert(vector& niz){
  int broj;
  while(std::cin >> broj){
    niz.push_back(broj);
  }
}


void swap(vector& a){
  vector novi;
  for(int i = a.size()-1 ;i >= 0; --i){
    novi.push_back(a.at(i));
  }
  a = novi;
}

void ispisiVektor(const vector& niz){
  for(auto e: niz){
    std::cout << e << " " ;
  }
  std::cout << std::endl;
}

void maxElement(const vector& niz){
  int a = 0;
  for(auto e:niz){
    if(e > a){
      a = e;
    }
  }
  std::cout << a << std::endl;
}

void minElement(const vector& niz){
  int a = niz.at(0);
  for(auto e:niz){
    if(e < a){
      a = e;
    }
  }
  std::cout << a << std::endl;
}

void suma(const vector& niz){
  int suma = 0;
  for(auto e: niz){
    suma += e;
  }
  std::cout << suma << std::endl;
}

void proizvod(const vector& niz){
  int proizvod = 1;
  for(auto e: niz){
    proizvod *= e;
  }
  std::cout << proizvod << std::endl;
}

