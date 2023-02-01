#include <sys/ioctl.h>
#include <chrono>
#include <iostream>
#include <thread>
#include <string>

std::string heart=  "\xe2\x99\xa5";

size_t broj_kolona() {
  winsize sz;
  ioctl(0, TIOCGWINSZ, &sz);
  return sz.ws_col;
}

void pauziraj(unsigned int msec) {
  std::flush(std::cout);
  std::this_thread::sleep_for(std::chrono::milliseconds{msec});
}

int main() {
  // char symbols[4] = { '|', '/', '-', '\\'};
  while(true){
    for(int i = 0; i< broj_kolona(); ++i){
      std::cout << "\b " << heart << " ";
      pauziraj(20);
    }
    // std::cout << "\b |" << std::endl;
  }


  return 0;
}

