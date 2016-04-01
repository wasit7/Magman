//#include "Moveable/moveable.h"
#include "Speakable/Speakable.h"
//#include "vulnerable.h"
#include<iostream>
using namespace std;
class Magman: public Speakable {
    public:
    void print(){
        cout<<">>>Magman Magman!<<<"<<endl;
    }
};
int main(){
    Magman m;
    m.print();
    for(int i=0;i<10;i++){
        m.printSentence();
    }
    return 0;
}