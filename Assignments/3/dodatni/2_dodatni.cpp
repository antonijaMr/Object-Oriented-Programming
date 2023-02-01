#include <iostream>
#include<vector>
#include<cmath>
 
struct tacka{
 int x;
 int y;
};
 
int main() {
 tacka point{};
 tacka Dpoint{};
 tacka DDpoint{};
 double D = 0;
 double distance = 0;
 std::vector<tacka> v;
 while(std::cin >> point.x >> point.y){
   v.push_back(point);
 }
 for(int i = 0; i < v.size() - 1;++i){
   distance = sqrt(pow((v[i+1].x)-(v[i].x),2)+pow(v[i].y-v[i+1].y,2));
   if( distance > D){
     D = distance;
     Dpoint = v[i];
     DDpoint = v[i+1];
   }
 }
 std::cout << "("<< Dpoint.x << "," << Dpoint.y << ")";
 std::cout << "("<< DDpoint.x << "," << DDpoint.y << ")";
 std::cout << " = " << distance << std::endl;
}

