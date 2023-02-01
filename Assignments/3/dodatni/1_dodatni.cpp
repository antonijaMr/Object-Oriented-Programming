#include <iostream>
#include <vector>
#include <cmath>

int svicarskiNoz(int a){
  return pow(2,a);
}
std::string svicarskiNoz(std::string a, std::string b){
 return a + " " + b;
}
std::string svicarskiNoz(double a){
  double b = a*2;
  double c = a*3;
  return std::to_string(a)+ " " + std::to_string(b) + " " + std::to_string(c);
}
std::string svicarskiNoz(std::vector<int> v){
  std::string niz{};
  for(auto e: v)
    niz+=std::to_string(e) + " ";
  return niz;
}

std::string svicarskiNoz(std::string a = "01:40:11"){
  std::string novi{};
  for(int i = a.size()-1; i>=0; --i)
    novi+= a[i];

  return novi;
}

int main()
{
  std::vector<int> niz{1,2,3};
  std::cout << svicarskiNoz(2) << std::endl;
  std::cout << svicarskiNoz(3) << std::endl;
  std::cout << svicarskiNoz(4) << std::endl;
  std::cout << svicarskiNoz("pozdrav","svima") << std::endl;
  std::cout << svicarskiNoz(3.14) << std::endl;
  std::cout << svicarskiNoz(niz) << std::endl;
  std::cout << svicarskiNoz() << std::endl;
  std::cout << svicarskiNoz("pozdrav") << std::endl;
  std::cout << svicarskiNoz(svicarskiNoz("pozdrav")) << std::endl;
}
