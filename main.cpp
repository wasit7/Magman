#include "Moveable/moveable.h"
#include "Speakable/Speakable.h"
//#include "vulnerable.h"
#include<iostream>
using namespace std;
class Magman: public Moveable, public Speakable {
    public:
    void print(){
        cout<<"Magman Magman!"<<endl;
    }
};
int main(){
    Magman m;
    m.print();
    m.printPos();
    m.printSentence();
    return 0;
}