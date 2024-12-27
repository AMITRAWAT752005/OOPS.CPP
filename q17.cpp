#include<iostream>
using namespace std;

class base{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
    
    public:
        base() : a(10),b(20),c(30){}

        void display(){
            cout<<"Public var is : "<<a<<endl;
            cout<<"Protected var is : "<<b<<endl;
            cout<<"Private var is : "<<c<<endl << endl;
        }
};

class derivedA:public base{
    public:
        void access(){
            a = 22;
            b = 33;
            display();
        }
};

class derivedB:protected base{
    public:
        void access(){
            a=25;
            b=35;
            display();
        }
};

class derivedC:private base{
    public:
        void access(){
            a=28;
            b=38;
            display();
        }
};

int main(){
    derivedA obj1;
    obj1.access();
    derivedB obj2;
    obj2.access();
    derivedC obj3;
    obj3.access();
    return 0;
}




