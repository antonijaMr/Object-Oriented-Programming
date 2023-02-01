#include <iostream>
#include <map>
#include <list>
#include <functional>
#include <vector>
#include <exception>

template<typename T,typename V1,typename V2>
void transformiraj(V1& v1,V2& v2,std::function<void(T&,T&)> f){
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
  auto func = [](double& a, double& b){ a = b;};
  try{
    std::vector<double> prvi = {1,2,2,2};
    std::vector<double> drugi = {2,2,2,2};
    transformiraj<double>(prvi, drugi, func);
    for(auto e : prvi)
      std::cout << e << std::endl;
    std::vector<double> treci = {3,3,3,3,3,3,3,3};
    // transformiraj<double>(prvi,treci,func);
  }catch(std::domain_error a){
    std::cout << a.what() << std::endl;
  }
  try{
    std::map<int,int> cetvrti = {{1,4},{2,4},{3,4}};
    std::list<int> peti = {1,1,1};
    // auto func = [](double& a, double& b){ a = b;};
    transformiraj<double>(cetvrti,peti,func);
    for(auto e: cetvrti)
      std::cout << e.first<< " "<< e.second << std::endl;
  }catch(std::domain_error a){
    std::cout << a.what() << std::endl;
  }


  return 0;
}
