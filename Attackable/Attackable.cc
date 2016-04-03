#include "Attackable.h"
#include <iostream>
#include <random>

void Attackable::updateAtkPower(int _atkPower){
        atkPower += _atkPower;
}

void Attackable::updateHitRate(int _hitRate){
        hitRate += _hitRate;
}

Attackable::Attackable(int _atkPower,int _hitRate){
    atkPower = _atkPower;
    hitRate = _hitRate;
}