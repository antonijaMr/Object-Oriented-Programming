#include "bankomat.hpp"

int main(void)
{
  Bankomat a("anti",1234,100);
  Bankomat b("maja",1222,100);
  Bankomat c("mire",1111,100);
  Bankomat wrong("x",1,0);
  Bankomat& user = wrong;

  
  std::cout << "Dobro dosli u ANTI~banku" << std::endl;
  std::vector<Bankomat> Banka{a,b,c};

  std::cout << "Kartice u sistemu: ";
  for(auto e: Banka){
    std::cout << e.getBrojK() << " ";
  }
  std::cout << std::endl;

  std::string s;
  std::cout << "Unesite broj kartice koju zelite koristi" << std::endl;
  std::cin >> s;

  for(auto e: Banka){
    if(e.getBrojK() == s){
      user = e;
      std::cout << "done" << std::endl;
    }
  }
  // if(user.getBrojK() == wrong.getBrojK()){
    // std::cout << "Nepostojeci korisnik" << std::endl;
  // }else{
    std::cout << user.getBrojK() << std::endl;
    int i = meni();
    double d;
    while(i){
      if(i == 1){
        std::cout << "Dodavanje novca: ";
        std::cin >> d;
        user.addMoney(d);
      }else if(i == 2){
        std::cout << "Dizanje novca: ";
        std::cin >> d;
        user.takeMoney(d);
      }else if(i == 3){
        d = user.StanjeR();
        std::cout << "Stanje racuna: " << d << std::endl;
      }else if(i == 4){
        std::cout << "Historija" << std::endl;
        user.history();
      }else{
        std::cout << "Odjava" << std::endl;
      }
      i = meni();
    }
  // }
 
  return 0;
}
