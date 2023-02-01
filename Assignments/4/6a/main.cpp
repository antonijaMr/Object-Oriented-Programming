#include "student.hpp"
#include <map>

int main(void)
{
  try{
  int i = meni();
  std::map<int,Student> mapaSt;
  std::list<Predmet> listaPr;
  Predmet p;
  Student s;
  while(i){
    if(i == 1){
      //UNOS STUDENTA
      s.unos();
      if(mapaSt.find(s.brojIndeksa) == mapaSt.end()) mapaSt[s.brojIndeksa] = s;
      else std::cout << "Student vec postoji" << std::endl;
    }else if(i == 2){
      //UNOS PREDMETA
      p.unos();
      if(!findPr(p,listaPr)) listaPr.push_back(p);
      else std::cout << "Predmet vec postoji" << std::endl;
    }else if(i == 3){
      //DODAVANJE OCJENA
      // unesiOcjenu(s, listaPr);
    }else if(i == 4){
      ispisMape(mapaSt);
    }else if(i == 5){
      ispisListe(listaPr);
    }else if(i == 6){
      //ocjene studenta prosjek
      // ispisOiP(s);
    }else if(i == 7){
      //edit st.
    }else{
      std::cout << "Odjava" << std::endl;
    }
    i = meni();
  }

  }catch(...){
    std::cout << "iznimka" << std::endl;
  }
 
  return 0;
}
