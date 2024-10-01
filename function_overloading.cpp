/*Using the concept of operator overloading. Implement a program to overload the 
following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement*/

# include<iostream>
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

void operator++ (){
   x+=1;
   y+=1;
}
void operator--(){
    x-=1;
    y-=1;
}
void operator++( int noUse){
    x+=1;
    y+=1;
}
void operator-- (int noUse){
    x-=1;
    y-=1;
}
void operator-(){
x=(-1)*x;
y=(-1)*y;
}
void show(){
    cout<<x<<" "<<y<<endl;
}

};
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
