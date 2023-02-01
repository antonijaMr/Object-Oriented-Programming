#include <iostream>
#include <functional>
#include <vector>
#include <exception>

void transformiraj(std::vector<double>& v1,std::vector<double>& v2,std::function<void(double&,double&)> f){
  if(v1.size() != v2.size()){
    throw std::domain_error("Domain error");
  }else{
    for(auto& e : v1){
      for(auto& g: v2){
        f(e,g);
      }
    }
  }
}

int main(void)
{
  try{
    std::vector<double> prvi = {1,2,2,2};
    std::vector<double> drugi = {2,2,2,2};
    auto func = [](double& a, double& b){ a = b;};
    transformiraj(prvi, drugi, func);
    for(auto e : prvi)
      std::cout << e << std::endl;
    std::vector<double> treci = {3,3,3,3,3,3,3,3};
    transformiraj(prvi,treci,func);
  }catch(std::domain_error a){
    std::cout << a.what() << std::endl;
  }
  return 0;
}
