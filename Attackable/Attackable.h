#include <iostream>
#include <random>
class Attackable{
    public:
        int atkPower;
        int hitRate;
        void updateAtkPower(int);
        void updateHitRate(int);
        template <class target> void attack(target* enemy){
            std::random_device rd;
            std::mt19937 gen(rd());
            if(gen()%101 <= hitRate)
                enemy->updateHp(-atkPower);
            else
                std::cout << "miss" << std::endl;
        }
        Attackable(int _atkPower = 1,int _hitRate = 95);
};