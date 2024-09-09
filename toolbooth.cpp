/*Imagine a tollbooth with a class called TollBooth. The two data items are of type
unsigned int and double to hold the total number of cars and total amount of money
collected. A constructor initializes both of these data members to 0. A member
function called payingCar( )increments the car total and adds 0.5 to the cash total.
Another function called nonPayCar( ) increments the car total but adds nothing to
the cash total. Finally a member function called display( )shows the two totals.
Include a program to test this class. This program should allow the user to push one
key to count a paying car and another to count a non paying car. Pushing the ESC
key should cause the program to print out the total number of cars and total cash
and then exit.*/

#include<iostream>
using namespace std;
class tollbooth
{
    int carTotal;
    double cashTotal;
    public:
    tollbooth(int carTotal,double cashTotal)
    {
        this->carTotal=carTotal;
        this->cashTotal=cashTotal;
    }
    void payingCar()
    {
        carTotal++;
        cashTotal+=0.5;
    }
    void nonPayCar()
    {
        carTotal++;
    }
    void display()
    {
        cout<<"Total cars:"<<carTotal<<endl;
        cout<<"Total cash:"<<cashTotal<<endl;
    }
};
int main()
{
    tollbooth ob(0,0.0);
    string in;
    cout<<"Press p for paying car // n for non paying car // ESC to print details"<<endl;
    do
    {
       cin>>in;
    switch(in[0])
    {
        case 'e':ob.display();break;
        case 'p':ob.payingCar();break;
        case 'n':ob.nonPayCar();break;
        default:
        cout<<"Invalid input"<<endl;
    }
    } while (in[0]!='e');
    return 0;
}