/*Using the concept of operator overloading. Implement a program to overload the 
following:
With the help of friend function
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement*/
#include<iostream>
using namespace std;
class unary{
private:
int x;
int y;
public:

unary(){

}
unary(int x,int y){
    this->x=x;
    this->y=y;
}
void show(){
    cout<<x<<" "<<y<<endl;
}


friend void operator ++(unary &a1);
friend void operator --(unary &a1);
friend void operator -(unary &a1);
friend void operator --(unary &a1,int noUse);
friend void operator ++(unary &a1,int noUse);
};
void operator++ (unary &a1){
   a1.x+=1;  //or ++a1.x;
  a1. y+=1;
}
void operator--(unary &a1){
   a1. x-=1;
    a1.y-=1;
}
void operator++( unary &a1,int noUse){
   a1. x+=1;
   a1. y+=1;
}
void operator-- (unary &a1,int noUse){
   a1. x-=1;
   a1. y-=1;
}
void operator-(unary &a1){
a1.x=(-1)*a1.x;
a1.y=(-1)*a1.y;
}


int main(){
unary a1(5,7);
cout<<"preincrement of ++"<<endl;
++a1;
a1.show();
cout<<"postincrement of --"<<endl;
a1++;
a1.show();
cout<<"predecrement of --"<<endl;
--a1;
a1.show();
cout<<"postdecrement of --"<<endl;
a1--;
a1.show();
cout<<"unary of-"<<endl;
-a1;
a1.show();

}
