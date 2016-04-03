#include <iostream>
#include <string>

template <class number>
void display(number *i){std::cout << *i << std::endl;}

class test{
    friend std::ostream& operator<< (std::ostream& out,const test& t){return out << t.i;}
public:
    int i;
    test(int _i = 0){i = _i;}
};

template <class data>
class test2{
    friend std::ostream& operator<< (std::ostream& out,const test2& t){return out << t.i;}
public:
    data i;
    test2(data _i){i = _i;}
};

int main(){
    int i = 1;
    test j = 2;
    test2<int> k = 3;
    test2<std::string> z = std::string("I'm lovin' it");
    display(&i);
    display(&j);
    display(&k);
    display(&z);
    display(&"bye!!");
}