#include "IOrijeci.hpp"
#include "dodavanje.hpp"
#include "MAXrijec.hpp"

int main(void)
{
  std::vector<std::string> vek;
  unos(std::cin, vek);
  int size = (maxrijec(vek)).size();

  for(auto& e : vek)
    if(e.size() < size)
      funkcija(e,size - e.size());

  ispis(vek);
  return 0;
}
