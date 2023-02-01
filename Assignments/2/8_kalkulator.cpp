#include <iostream>
#include <cmath>

void plus(double a, double b){
  std::cout << a + b << std::endl;
}
void minus(double a, double b){
  std::cout << a-b << std::endl;
}
void mnozenje(double a, double b){
  std::cout << a * b << std::endl;
}
void dijeljenje(double a, double b){
  std::cout << a/b << std::endl;
}
void modul(int a, int b){
  std::cout << a%b << std::endl;
}
void bla(double a, double b){
  std::cout << pow(a,b) << std::endl;
}
void pogresan_unos(){
  std::cout << "Pogresan unos" << std::endl;
}

int main(int argc, char *argv[])
{
  double a,b;
  char c;
  while(std::cin >> a >> c >> b){
  if(c == '+'){
    plus(a,b);
  }else if(c == '-'){
    minus(a,b);
  }else if(c == '*'){
    mnozenje(a,b);
  }else if(c == '/'){
    dijeljenje(a,b);
  }else if(c == '%'){
    modul(a,b);
  }else if(c == '^'){
    bla(a,b);
  }else{
    pogresan_unos();
    break;
  }
  }
  return 0;
}
