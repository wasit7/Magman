#include <iostream>

template <class number>
void display(number *i){std::cout << *i << std::endl;}

class test{
    friend std::ostream& operator<< (std::ostream& out,const test& data){return out << data.i;}
public:
    int i;
    test(int _i = 0){i = _i;}
};

int main(){
    int i = 1;
    test j = 2;
    display(&i);
    display(&j);
    display(&"test");
}