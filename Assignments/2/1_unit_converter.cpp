#include <iostream>
#include "1_unit_converter.hpp"

int main(void)
{
  int choice;
  welcome();
  while(std::cin >> choice){
    if(choice == 1){
        //temperature
        std::cout << "Please choose converter: " << std::endl;
        std::cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n4. Kelvin to Celsius\n5. Fahrenheit to Kelvin\n6. Kelvin to Fahrenheit" << std::endl;
        int choice2;
        while(std::cin >> choice2){
          tempConverter(choice2);
          }
        }else if(choice == 2){
          //speed
        }else if(choice == 3){
          //lenght
        }else if(choice == 4){
          //weight
        }else if(choice == 5){
          //fuel economy
        }else{
          std::cout << "Wrong input" << std::endl;
        }
    }
  }
