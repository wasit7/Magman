#include "Moveable/moveable.h"
#include "Speakable/Speakable.h"
#include "vulnerable/vulnerable.h"
#include "Attackable/Attackable.h"
using namespace std;
class Magman: public Speakable,public Attackable,public Moveable,public Vulnerable {
    public:
    void print(){
        cout<<">>>Magman Magman!<<<"<<endl;
    }
};
int main(){
    Magman m1,m2;
    while(!m2.isDead()){
        m1.attack(&m2);
        cout << "m1 attack : now m2's HP is " << m2.hp << endl;
    }
    return 0;
}