#include <iostream>
#include <map>
#include <vector>

std::string makeLow(const std::string& s){
  std::string novi;
  for(int i = 0; i<s.size();++i){
    novi += std::tolower(s[i]);
  }
  return s;
}
//anti ANTI
bool uslov(std::map<std::string,int> mapa,std::string rijec){
  std::string rijecMalim = makeLow(rijec);
  if(mapa.empty()) return false;
  std::cout << "nije empty" << std::endl;
  if(rijec == rijecMalim) return false;
  std::cout << "rijec je malim" << std::endl;
  // if(mapa.find(rijec) == mapa.end()) return false;
  if(mapa.find(rijecMalim) != mapa.end()){
    std::cout << "nasl" << std::endl;return true;
  }
  std::cout << "problem" << std::endl;
}

int main(void)
{
  std::string a;
  std::map<std::string,int> maparijeci;
  std::vector<std::string> rijeci;
  while(std::cin >> a)
    rijeci.push_back(a);
  for(auto e : rijeci)
    std::cout << e << " ";
  std::cout << std::endl;

  auto iter = maparijeci.begin();
  for(auto e : rijeci){
    if(uslov(maparijeci,e)){
      std::cout << "--" << e << std::endl;
    }else if(maparijeci.find(e) == maparijeci.end()){
      std::cout << "pravimo " << e << std::endl;
      maparijeci[e]= 1;
    }else{
      iter = maparijeci.find(e);
      iter->second += 1;
      std::cout << "++" << e << std::endl;
    }
  }
  
  for(auto e : maparijeci){
    std::cout << e.first << ": " << e.second << std::endl;
  }

  
  return 0;
}
