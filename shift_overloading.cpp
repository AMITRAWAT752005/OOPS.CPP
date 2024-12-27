//shift operator overloading
#include <iostream>
using namespace std;
class date
{
    private:
    int day,month,year;
    public:
    friend ostream& operator <<(ostream &,date &);
    friend istream& operator >>(istream &,date &);
};
ostream& operator <<(ostream &out,date &d)
{
    out<<d.day<<"/";
    out<<d.month<<"/";
    out<<d.year<<endl;
    return out;
}
istream& operator >>(istream &in,date &d)
{
    cout<<"Enter the day month and year"<<endl;
    in>>d.day>>d.month>>d.year;
    return in;
}
int main()
{
    date ob;
    cin>>ob;
    cout<<ob;   
 return 0;
}

