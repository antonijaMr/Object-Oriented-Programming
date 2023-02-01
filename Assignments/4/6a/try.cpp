#include"student.hpp"

int main(void)
{
  Student s;
  Predmet p;
  // Predmet oop(oop,);
  std::map<int, Student> m;
  std::list<Predmet> l;
  l.push_back(p);
  s.unos();
  p.unos();
  m[s.brojIndeksa] = s;
  l.push_back(p);
  // unesiOcjenu(m,l);
  // ispisOiP(s);
  return 0;
}
