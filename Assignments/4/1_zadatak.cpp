// Kreirati program koji od korisnika trazi unos proizvoljnog broja cijelih brojeva. Unijeti sve brojeve u listu.
// Sortirati listu te ispisati najveci i najmanji broj. Kao pomoc, kreirati funkciju koja prima listu i cijeli broj.
// Funckija treba da simulira operator [ ], te vraca referencu na broj u listi na poziciji koju diktira cijeli broj. Uz
// pomoc te funkcije vrsiti sortiranje. Tipove parametara funckije, kao i povratne tipove zakljuciti na osnovu
// postavke.
#include <iostream>
#include <list>
#include <algorithm>

int& sim(std::list<int>& l,int broj){
  auto ref = l.begin();
  if(broj<0 || broj > l.size())throw std::string{"ne dozvoljeno indeksiranje"};
  for(int i = 0;i!=broj;i++)
    ref++;
  return *ref;
}


int main(void)
{
  int broj;
  std::list<int> lista;
  while(std::cin >> broj)
    lista.push_back(broj);

  auto kr = [](int a,int b){
    return a<b;
  };
  lista.sort(kr);
  


  std::cout << sim(lista,0) <<" "<< sim(lista,lista.size()-1) << std::endl;


  
  return 0;
}
