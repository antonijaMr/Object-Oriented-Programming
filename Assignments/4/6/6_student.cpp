#include "1_student.hpp" 
#include <map>
#include <list>
#include <algorithm>


int main(void)
{
  try{
    std::map<int,Student> mapaSt;
    std::list<Predmet> listaPr;
    int i = 5;
    while(i){
      int n = meni();
      if(n == 1 || n == 6){
        Student s;
        s.unos();
        if(mapaSt.find(s.brojIndeksa) == mapaSt.end())
          mapaSt[s.brojIndeksa] = s;
        else
          std::cout << "Student vec postoji" << std::endl;
      }else if(n == 5){
        Predmet p;
        p.unos();
        if((std::find(listaPr.begin(),listaPr.end(),p) == listaPr.end()))
          listaPr.push_back(p);
        else 
          std::cout << "Predmet vec postoji" << std::endl;
      }else if(n == 8){
        ispisStudenata(mapaSt);
      }else if(n == 9)
        break;
      --i;
    }
  }catch(const std::string& err){
    std::cout << err << std::endl;
  }
  return 0;
}



