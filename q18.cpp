/*You are given three classes A, B and C. All three classes implement their own
version of func. In class A, func multiplies the value passed as a parameter by 2. In
class B, func multiplies the value passed as a parameter by 3. In class C, func
multiplies the value passed as a parameter by 5.You are given class D such that You
need to modify the class D and implement the function update_val which sets D's
val to new_val by manipulating the value by only calling the func defined in classes
A, B and C.It is guaranteed that new_val has only 2, 3 and 5 as its prime factors.
Implement class D's function update_val. This function should update D's val only
by calling A, B and C's func.
Sample Input
new_val = 30
Sample Output
A's func called 1 times
B's func called 1 times
C's func called 1 times*/
#include <iostream>
using namespace std;
class a
{
    int count1;
    public:
    a()
    {
        count1=0;
    }
    int getCount()
    {
        return count1;
    }
    int func(int value)
    {
        count1++;
        value=value*2;
        return value;
    }
};
class b
{
    int count2;
    public:
    b()
    {
        count2=0;
    }
    int getCount()
    {
        return count2;
    }
    int func(int &value)
    {
        count2++;
        value=value*3;
        return value;
    }
};
class c
{
    int count3;
    public:
    c()
    {
        count3=0;
    }
    int getCount()
    {
        return count3;
    }
    int func(int &value)
    {
        count3++;
        value=value*3;
        return value;
    }
};
class d:public a,public b,public c
{
    int value;
    public:
    d()
    {
        value=1;
    }
    void updateValue(int newValue)
    {
        while(newValue%2==0)
        {
            a::func(value);
            newValue/=2;
        }
        while(newValue%3==0)
        {
            b::func(value);
            newValue/=3;
        }
        while(newValue%5==0)
        {
            c::func(value);
            newValue/=5;
        }
    }
    void showFacators()
    {
        cout<<"A call:"<<a::getCount()<<endl;
        cout<<"B call:"<<b::getCount()<<endl;
        cout<<"C call:"<<c::getCount()<<endl;
    }
};
int main()
{
    int value;
    cout<<"Enter value"<<endl;
    cin>>value;
    d ob;
    ob.updateValue(value);
    ob.showFacators();
    return 0;
}
