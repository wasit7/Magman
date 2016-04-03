#include<iostream>
using namespace std;

class Moveable
{
  public:
  float Posx;
  float Posy;
  Moveable(float = 0,float =0);
  void addDisplacement(float , float );
  void printPos();
    
};