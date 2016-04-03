#include "Attackable.h"
#include <iostream>
#include <random>

void Attackable::updateAtkPower(int _atkPower){
        atkPower += _atkPower;
}

void Attackable::updateHitRate(int _hitRate){
        hitRate += _hitRate;
}

template <class target>
void Attackable::attack(target* enemy){
    std::random_device rd;
    std::mt19937 gen(rd());
        if(gen()%101 <= hitRate)
            enemy->updateHp(atkPower);
        else
            std::cout << "miss" << std::endl;
}

Attackable::Attackable(int _atkPower,int _hitRate){
    atkPower = _atkPower;
    hitRate = _hitRate;
}