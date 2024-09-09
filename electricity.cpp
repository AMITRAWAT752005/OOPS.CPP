/* Q An electricity board charges the following rates to domestic users to 
discourage large consumption of energy. 
For the first 100 units: - 60 P per unit 
For the next 200 units: -80 P per unit 
Beyond 300 units: -90 P per unit 
All users are charged a minimum of Rs 50 if the total amount is more than 
Rs 300 then an additional surcharge of 15% is added. 
Implement a C++ program to read the names of users and number of units 
consumed and display the charges with names */

#include <iostream>
using namespace std;

class bill
{
    string name;
    int unit;
    float bill;

public:
    void setName(string nm)
    {
        name = nm;
    }

    void setUnit(int un)
    {
        unit = un;
    }

    void setBill(float b)
    {
        bill = b;
    }

    string getName()
    {
        return name;
    }

    int getUnit()
    {
        return unit;
    }

    float getBill()
    {
        return bill;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Unit : " << unit << endl;
        cout << "Bill : " << bill << endl;
    }

    int calc()
    {
        if (unit <= 100)
        {
            bill = unit * 0.6;
        }
        else if (unit > 100 && unit <= 300)
        {
            bill = 60 + ((unit - 100) * 0.8);
        }
        else
        {
            bill = 60 + 160 + ((unit - 300) * 0.9);
        }
        bill += 50;
        if (bill > 300)
            bill +=0.15*bill;

        return bill;
    }
};
int main()
{
    bill op;
    cout << "Enter your name " << endl;
    string name;
    cin >> name;
    op.setName(name);
    cout << "Enter your Unit " << endl;
    int u;
    cin >> u;
    op.setUnit(u);

    int final = op.calc();
    cout << "Your Electricity Bill is : "<<final;
}