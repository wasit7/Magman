#include "moveable.h"

Moveable::Moveable(float _x, float _y)
{
    Posx = _x;
    Posy = _y;
}
void Moveable::addDisplacement (float _x, float _y)
{
    Posx += _x;
    Posy += _y;
}

void Moveable::printPos()
{
    cout<<"("<<Posx<<","<<Posy<<")"<<endl;
}