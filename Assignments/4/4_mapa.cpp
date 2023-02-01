// Napisati funkciju koja kao argument prima mapu, lambdu, i varijablu generickog tipa. Mapa kao kljuc ima
// genericki tip a kao vrijednost list kontejner koji pohranjuje elemente bilo kojeg tipa. Lambda predstavlja kriterij
// za sortiranje elemenata liste. Genericki tip kao treci argument sluzi za identifikaciju liste u mapi, te ukoliko ne
// identificira ni jednu listu, potrebno je u mapu dodati novu, te okoncati izvrsenje funkcije, u suprotnom sortirati
// identificiranu listu. Funkcija ne vraca nista, sprijeciti bilo kakvo kopiranje.

#include <iostream>
#include <algorithm>
#include <map>
#include <list>

template<typename T,typename L,typename U>
void funkcija(std::map<T,std::list<U>>& mapa, L l, const U& tip){
  auto it = mapa.find(tip); 
  if(it == mapa.end()){
      mapa[tip];
      return;
  }else{
    auto& begin = (*it).second;//*(kljuc.second)
    begin.sort(l);
  }
}

int main(void)
{
  std::list<int> i{1,2,6,3};
  //za sortiranje list kont.
  auto kriterij = [](int a, int b){return a < b;};
  std::map<int,std::list<int>> testMapa{{1,i}};
  int x = 2;
  int y = 1;
  funkcija(testMapa,kriterij, x);
  std::cout << "1,2" << std::endl;
  for(auto e: testMapa)
    std::cout << e.first << " ";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "1,2,3,6" << std::endl;
  funkcija(testMapa,kriterij,y);
  for(auto e: testMapa){
    for(auto a :e.second){
      std::cout << a << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << "6,3,2,1" << std::endl;
  auto kriterijVece = [](int a, int b){return a > b;};
  funkcija(testMapa,kriterijVece,y);
  for(auto e: testMapa){
    for(auto a :e.second){
      std::cout << a << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
