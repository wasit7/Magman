#include <iostream>
#include <random>
class Attackable{
    public:
        int atkPower;
        int hitRate;
        void updateAtkPower(int);
        void updateHitRate(int);
        template <class target> bool attack(target* enemy);
        Attackable(int _atkPower = 1,int _hitRate = 95);
};

template <class target> bool Attackable::attack(target* enemy){
    std::random_device rd;
    std::mt19937 gen(rd());
    if(gen()%101 <= hitRate){
        enemy->updateHp(-atkPower);
        return true;
    }
    else{
        return false;
    }
}