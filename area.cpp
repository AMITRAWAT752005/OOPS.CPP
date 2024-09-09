/*Construct a Program in C++ to show the working of function overloading(compile time polymorphism)
by using a function named calculate Area () to calculate area
of square, rectangle and triangle using different signatures as required.*/
#include<iostream>
using namespace std;
class area
{
    public:
    int calArea(int a)
    {
        return a*a;
    }
    int calArea(int a,int b)
    {
        return a*b;
    }
    float calArea(double r)
    {
        return 3.14*r*r;
    }
    float calArea(double b,double h)
    {
        return b*h/2;
    }
};
int main()
{
    area ob;
    int p=ob.calArea(10);
    cout<<"Area of square:"<<p<<endl;
    int q=ob.calArea(10,30);
    cout<<"Area of rectangle:"<<q<<endl;
    int r=ob.calArea(8);
    cout<<"Area of Circle:"<<r<<endl;
    int s=ob.calArea(6,12);
    cout<<"Area of triangle:"<<s<<endl;
    return 0;
}