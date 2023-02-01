#pragma once
#include <vector>
#include <iostream>
#include <chrono>
#include <thread>

class Bankomat{
  public:
    Bankomat()=default;
    Bankomat(const std::string& card, unsigned int pin, double money)
      :brojKartice_{card},pin_{pin},stanjeRacuna_{money}{}

    void setBrojK(const std::string& s){ brojKartice_ = s;}
    void setPin(int s){ pin_ = s;}
    void setStanjeR(double s){stanjeRacuna_ = s;}
    void setHistory(const std::string& s){ historija.push_back(s);}

    std::string getBrojK()const{ return brojKartice_; }
    double getstanje()const{return stanjeRacuna_;}

    double StanjeR(){ 
      if(stanjeRacuna_ > 0.5){
        stanjeRacuna_ -= 0.5;
        setHistory("Stanje racuna");
        return stanjeRacuna_; 
      }else{
        std::cout << "Nemate dovoljno sredstava"  << std::endl;
        return 0;
      }
    }

  
    void takeMoney(double amount){
      if(identify()){
        if(stanjeRacuna_ - amount -1 <= 0){
        std::cout << "Nemate dovoljno sredstava" << std::endl;
        return;
      }else{
        setHistory("Dizanje novca");
        stanjeRacuna_ -= amount-1;
      }
      }else return;
    }

    void addMoney(double amount){
      if(identify()){
        setHistory("Dodavanje novca");
        stanjeRacuna_ += amount;
      }else return;
    }

    bool identify(){
      int i = 3;
      while(i){
      int pin;
      std::string brKartice;
      std::cout << "Autentifikacija: " << "kartica:";
      std::cin >> brKartice;
      std::cin.clear();
      std::cout << "PIN: ";
      std::cin >> pin;
      if(brKartice == brojKartice_ && pin == pin_) return true;
      else if(i == 0){
        std::cout << "Neuspjesna autentifikacija" << std::endl;
        setHistory("Neuspjesna autentifikacija");
        std::cout << "PAUZA" << std::endl;
        return false;
      }
      --i;
      setHistory("Neuspjesna autentifikacija");
      }
      return false;
    }

    void history(){
      for(auto e : historija){
        std::cout << e << std::endl;
      }
    }



  private:
    std::string brojKartice_;
    unsigned int pin_;
    double stanjeRacuna_ = 0;
    std::vector<std::string> historija;
  
};

int meni(){
  int n;
  std::cout << "Izaberite jednu opciju" << std::endl;
  std::cout << "1. Dodavanje novaca" << std::endl;
  std::cout << "2. Dizanje novca" << std::endl;
  std::cout << "3. Stanje racuna" << std::endl;
  std::cout << "4. Historija" << std::endl;
  std::cout << "0. Odjava" << std::endl;
  std::cin >> n;
  if( n == 1 || n == 2 || n == 3 || n == 4 ) return n;
  else return 0;
}








