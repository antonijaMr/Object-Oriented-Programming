#pragma once
#include <iostream>
#include <string>

const double celsiusKelvinCoeff = 273.15;
const double inchCmCoeff = 2.54;

void welcome(){
  std::cout << "Welcome to Unit converter. Please enter one of the following options: " << std::endl;
  std::cout << "1. Temperature \n2. Speed \n3. Lenght \n4. Weight \n5. Fuel economy" << std::endl;
  std::cout << "Your choice: ";
}

void tempConverter(const int& n){
  double temp;
  double newtemp;
  if(n == 1){
    std::cout << "Enter temperature in degrees Celsius: " << std::endl;
    std::cin >> temp;
    newtemp = temp*celsiusKelvinCoeff;
    std::cout << temp << " degress Celsius is " << newtemp << " degrees Fahrenheit" << std::endl;
  }else if(n == 2){
    std::cout << "Enter temperature in degrees Fahrenheit: " << std::endl;
    std::cin >> temp;
    newtemp = temp*celsiusKelvinCoeff;
    std::cout << temp << " degress Fahrenheit is " << newtemp << " degrees Celsius" << std::endl;
  }else if(n == 3){
    std::cout << "Enter temperature in degrees Celsius: " << std::endl;
    std::cin >> temp;
    newtemp = temp*celsiusKelvinCoeff;
    std::cout << temp << " degress Celsius is " << newtemp << " Kelvins" << std::endl;
  }else if(n == 4){
    std::cout << "Enter temperature in degrees Celsius: " << std::endl;
    std::cin >> temp;
    newtemp = temp*celsiusKelvinCoeff;
    std::cout << temp << " degress Celsius is " << newtemp << " degrees Fahrenheit" << std::endl;
  }else if(n == 5){
    std::cout << "Enter temperature in Kelvins: " << std::endl;
    std::cin >> temp;
    newtemp = temp*celsiusKelvinCoeff;
    std::cout << temp << " Kelvins is " << newtemp << " degrees Celsius" << std::endl;
  }else if(n == 6){
  }else{
    std::cout << "Wrong input" << std::endl;
  }
}
