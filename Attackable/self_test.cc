#include <iostream>
#include <string>

template <class number>void display(number *i){std::cout << *i << std::endl;}

class test{
    friend std::ostream& operator<< (std::ostream& out,const test& t){return out << t.k;}
public:
    int k;
    test(int _k = 0){k = _k;}
    void print1(int i){
        k += i;
        std::cout << k << std::endl; 
    }
};

template <class data> class test2{
    friend std::ostream& operator<< (std::ostream& out,const test2& t){return out << t.i;}
public:
    data i;
    test2(data _i){i = _i;}
    template <class other> void print(other* obj){
        obj->print1(-i);
    }
};

template <class data>class test3:public test2<data>,public test{
    public:
    test3(data input): test2<data>(input){}
    
};

int main(){
    test3<int> obj= 4,obj2=3;
    obj.print(&obj2);
}