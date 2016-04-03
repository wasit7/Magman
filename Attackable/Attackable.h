class Attackable{
    public:
        int atkPower;
        int hitRate;
        void updateAtkPower(int _atkPower);
        void updateHitRate(int _hitRate);
        template <class target>
        void attack(target* enemy);
        Attackable(int _atkPower = 1,int _hitRate = 95);
};