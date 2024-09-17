/*Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and Objects */

#include <iostream>
using namespace std;


class Employee{


int id;
string name;
float Salary;
string CompanyName;

public: 

void setId(int idd){
id = idd;
}
void setName(string Name){
name = Name;
}
void setSalary(float sal){
Salary = sal;
}
void setCompanyName(string cname){
CompanyName = cname;
}


int getId(){
    return id;
}

string getName(){
    return name;
}

float getSalary(){
    return Salary;
}

string getCompanyName(){
    return CompanyName;
}

void show(){
    cout<<"Id :"<<id<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Salary :"<<Salary<<endl;
    cout<<"CompanyName :"<<CompanyName<<endl;
}

};

int main(){
    Employee d1;
    int id;
    string name, Cname;
    float sal;
    cout<<"Enter the id : ";
    cin>>id;
    cout<<"Enter the Name : ";
    cin>>name;
    cout<<"Enter the Salary : ";
    cin>>sal;
    cout<<"Enter the CompanyName : ";
    cin>>Cname;

   

    d1.setId(id);
    d1.setName(name);
    d1.setSalary(sal);
    d1.setCompanyName(Cname);

    cout<<endl;
    d1.show();

}