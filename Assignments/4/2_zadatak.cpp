// Kreirati program koji od korisnika trazi unos prozivoljnog broja rijeci. Nakon sto korisnik zavrsi sa unosom
// (CTRL + D), ispisati broj pojavljivanja svake od rijeci. Ukoliko korisnik unese rijec sa svim velikim slovima
// potrebno je umanjiti broj pojavljivanja za jedan. Ukoliko rijec dostigne broj pojavljivanja nula, potrebno je
// obrisati rijec iz mape i ne prikazati je. Program uraditi uz pomoc map kontejnera, iteriranje izvrsiti uz pomoc
// iteratora, te se sluziti metodama find, i erase.
#include <iostream>
#include <map>
#include <vector>

std::string makeUP(const std::string& s){
  std::string novi;
  for(int i = 0; i<s.size();++i){
    novi += std::toupper(s[i]);
  }
  return novi;
}


int main(void)
{
  std::string a;
  std::map<std::string,int> maparijeci;
  std::vector<std::string> rijeci;
  while(std::cin >> a)
    rijeci.push_back(a);

  for(auto it = rijeci.begin();it!=rijeci.end();++it){
    if(maparijeci.find(*it)== maparijeci.end()){
      std::cout << "making: " << *it << std::endl;
      maparijeci[*it] = 1;
    }else if(maparijeci.find(*it) != maparijeci.end()){
      std::cout << "plus: " << *it << std::endl;
      maparijeci[*it]++;
    }else if(maparijeci.find(makeUP(*it))==maparijeci.find(*it)){
      std::cout << "minus: "<< *it << std::endl;
      maparijeci[*it]--;
    }
  }
  
  for(auto e : maparijeci){
    std::cout << e.first << ": " << e.second << std::endl;
  }

  
  return 0;
}
