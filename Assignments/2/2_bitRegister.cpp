#include <bitset>
#include <iostream>

// Poziv funkcije printBits rezultovace sa ispisom
// proslijedjenog broja u binarnoj formi.
//
// Primjer:
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// unsigned short s = 5;
// printBits(s);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Ispis:
// 0000000000000101
// 
void printBits(unsigned short reg) {
  std::bitset<16> bits(reg);
  std::cout << bits << std::endl;
}

int main() {
  unsigned short reg1 = 0, reg2 = 0, bit;
  unsigned short *active_reg = nullptr;
  int option;
  while(true){
    std::cout << "Select the register you want to edit: " << std::endl;
    std::cout << "\t1. Register 1" << std::endl;
    std::cout << "\t2. Register 2" << std::endl;
    std::cout << "\t3. Exit" << std::endl;

    std::cout << "Enter option: " << std::endl;
    std::cin >> option;
    if(option == 3){
    break;
    }
    active_reg = (option == 1 ? &reg1 : &reg2);
    
    std::cout << "1. Print register" << std::endl;
    std::cout << "2. Set bit in register" << std::endl;
    std::cout << "3. Reset bit in register" << std::endl;
    std::cout << "4. Swap register values" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter option: ";
    std::cin >> option;
    while(true) {
      if (option == 1) {
        std::cout << "The value of this register is: " << *active_reg << std::endl;
        printBits(*active_reg);
        break;
      } else if (option == 2) {
        std::cout << "Enter bit number: ";
        std::cin >> bit;
        *active_reg |= 1 <<bit;
        std::cout << "New register value: " << *active_reg << std::endl;
        printBits(*active_reg);
        break;
      } else if (option == 3) {
        std::cout << "Enter bit number: " << std::endl;
        std::cin >> bit;
        *active_reg &= ~(1 <<bit);
        std::cout << "New register value: " << *active_reg << std::endl;
        printBits(*active_reg);
        break;
      } else if (option == 4) {
        reg1 = reg1 ^ reg2;
        reg2 = reg1 ^ reg2;
        reg1 = reg1 ^ reg2;
        std::cout << "Register valuse have been swapped!" << std::endl;
        break;
      } else if(option == 5){
        break;
      }
    std::cout << std::endl;
  }
  }
  return 0;
}
