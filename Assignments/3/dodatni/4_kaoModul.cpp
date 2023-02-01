#include <iostream>
#include <functional>
#include <algorithm>
#include <iterator>
#include <vector>

auto lambdaKriterij = [](std::string a, std::string b){ return a < b;};

std::ostream& ispisi(std::vector<std::string>& vektor, std::ostream & izvor){
  for(int i = 0; i< vektor.size();++i)
    izvor << vektor[i] << " ";
  izvor << std::endl;
  return izvor;
}

std::vector<std::string>& dodaj(std::vector<std::string>& v, const std::string& rijec){
  v.push_back(rijec);
  return v;
}

void kopiraj(const std::vector<std::string>& v1, std::vector<std::string>& v2){
  std::vector<std::string> v3{};
  for(auto e : v1)
    v3.push_back(e);
  v2 = v3;
}

void obrisiRijec(std::vector<std::string>& v, const std::string& rijec){
  for(auto i = v.begin(); i != v.end(); ++i)
    if((*i) == rijec){
      v.erase(i);
      break;
    }
}

void izvrsi(std::vector<std::string>& v, std::function<void(std::string&)> lambda){
  for(auto& e :v)
    lambda(e);
}

std::vector<std::string>& sortiraj(std::vector<std::string>& v, std::function<bool(std::string, std::string)> kriterij = lambdaKriterij){
  std::sort(v.begin(),v.end(), kriterij);
  return v;
}

std::vector<std::string> dodajVektor(const std::vector<std::string>& v1, std::vector<std::string>& v2){
  for(auto e : v1)
    v2.push_back(e);
  return v2;
}


void obrisiIsteRijeci(const std::vector<std::string>& v1, std::vector<std::string>& v2){
  for(auto it = v2.begin();it != v2.end();){
    for(auto e: v1){
      if(*it == e){
        auto it2 = v2.erase(it);
        it = it2;
      }else{
        ++it;
      }
    }
  }
  }

void obrisiRazliciteRijeci(const std::vector<std::string>& v1, std::vector<std::string>& v2){
  for(auto it = v2.begin();it != v2.end();){
    for(auto e: v1){
      if(*it != e){
        auto it2 = v2.erase(it);
        it = it2;
      }else{
        ++it;
      }
    }
  }
  }

void izvrsiNputa(std::vector<std::string>& v, std::function<void(std::string&)> lambda, int n){
  for(int i = 0; i<n; ++i){
    for(auto& e: v){
      lambda(e);
    }
  }
}




int main(void)
{
  std::vector<std::string> baza1{"emir","mirza","meliha","jasmin","dzemo"};
  std::vector<std::string> baza2;
  kopiraj(baza1, baza2);
  dodaj(baza1,"dino");
  dodaj(baza2,"samir");
  obrisiIsteRijeci(baza1,baza2);
  obrisiRazliciteRijeci(baza2,baza1);
  dodaj(baza2,"emina");
  dodaj(baza1,"muharem");
  dodajVektor(baza1,baza2);
  sortiraj(baza2);
  izvrsiNputa(baza2,[](std::string& rijec){
       rijec[0]++;},3);
  dodajVektor(baza2,baza2);
  ispisi(sortiraj(dodaj(baza2,"amer")),std::cout);



  return 0;
}
