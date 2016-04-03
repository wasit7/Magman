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
    m2.print();
    m2.printSentence();
    while(!m2.isDead()){
        cout <<"\nPlayer attack: ";
        if(m1.attack(&m2))
            cout << "now m2's HP is " << m2.hp << endl;
        else
            cout << "miss!!" << endl;
        cout << "m2 said: ";
        m2.printSentence();
    }
    return 0;
}