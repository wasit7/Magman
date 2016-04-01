#include<iostream>
#include"moveable.h"
using namespace std;

int main()
{
    Moveable obj(2.0f,3.0f);
    obj.printPos();
    obj.addDisplacement(1.0f,2.0f);
    obj.printPos();
    
    return 0;
    
}