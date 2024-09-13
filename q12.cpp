/*Create a class called Time that has separate int member data for hours, minutes and 
seconds. One constructor should initialize this data to 0, and another should 
initialize it to fixed values. A member function should display it in 11:59:59 format. 
A member function named add() should add two objects of type time passed as 
arguments. A main ( ) program should create two initialized values together, leaving 
the result in the third time variable. Finally it should display the value of this third 
variable.*/


# include<iostream>
using namespace std;
class time{
private:
int hour;
int min;
int sec;
public:
time(){
    hour=0;
    min=0;
    sec=0;
}
time (int hour,int min,int sec){
    this->hour=hour;
    this->min=min;
    this->sec=sec;
    }

void add(time& t1, time& t2) {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min + sec / 60;
        hour = t1.hour + t2.hour + min / 60;
        
        sec %= 60; 
        min %= 60; 
        // hour %= 24;   
    }

void display(){
    cout<<hour<<":"<<min<<":"<<sec<<endl;


}


};
int main(){
int hour1,min1,sec1;
int hour2,min2,sec2;
cout<<"enter the first time :";
cin>>hour1>>min1>>sec1;
cout<<"enter the second time :";
cin>>hour2>>min2>>sec2;

time t1(hour1,min1,sec1);
time t2(hour2,min2,sec2);

time t3;
 t3.add(t1, t2);

 cout << "Time 1: ";
    t1.display();

  cout << "Time 2: ";
    t2.display();

  cout<<"total time:";
  t3.display();  


}