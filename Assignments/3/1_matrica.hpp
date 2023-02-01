#pragma once
#include <iostream>
#include <vector>

std::vector<std::vector<int>> kreirajmatricu(int n){
  std::vector<std::vector<int>> b;
  for(int i =0;i!=n; ++i){
    std::vector<int> a;
    for(int j =0;j!=n; ++j){
      int randomBroj = rand()%100+1;
      a.push_back(randomBroj);
      // a.push_back(1);
    }
    b.push_back(a);
  }
  return b;
}


std::vector<std::vector<int>> saberimatrice(const std::vector<std::vector<int>>& x,const std::vector<std::vector<int>>& y){
  if(sizeof(x) != sizeof(y)) throw std::string{"Velicina matrica je razlicita"};
  auto rez= x;
  int n = (x.at(0)).size();
  for(int i = 0; i!=n; ++i){
    for(int j = 0;j != n; ++j){
      (rez.at(i)).at(j) = (x.at(i)).at(j)+(y.at(i)).at(j);
    }
  }
  return rez;
}

void glavnadijagonala(const std::vector<std::vector<int>>& a){
  int n = (a.at(0)).size();
   for(int i = 0; i!=n; ++i){
    for(int j = 0;j != n; ++j){
      if(i == j)
        std::cout << (a.at(i)).at(j) << " ";
    }
  }
  std::cout << std::endl;
}

void sporednadijagonala(const std::vector<std::vector<int>>& a){}



