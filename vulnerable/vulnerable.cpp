#include "vulnerable.h"



    
void Vulnerable::updateHp(int hp){
    
     this->hp = this->hp + hp;
    
}

bool Vulnerable::isDead(){
    
     
     if(hp <= 0){ 
         
         return true; 
     
     std::cout << "I'm very dead!" << endl;
     
         
     }
     
     
     
     else { 
         
         return false; 
         
     }
    
    
}
    