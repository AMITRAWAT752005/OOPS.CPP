/*
//deep and shallow concept   
# include<iostream>
using namespace std;
class student{
public:
string name;
double *cgpaPtr;

student (string name,double cgpa){//constructor of s1

    this->name=name;
   cgpaPtr=new double;
   *cgpaPtr=cgpa;

}
student(student &s1){  //copy contructor ha its required some constructor also to be copy and if we will not make this by default it maked bycompiler and we can use it also .[constructor of s1]
    this->name=s1.name;
    this->cgpaPtr=s1.cgpaPtr;
}
void getInfo(){
cout<<"name:"<<name<<endl;
cout<<"cgpa:"<<*cgpaPtr<<endl;
}
};
int main(){
student s1("rahul",5.6);

 student s2(s1);//neha 

 s1.getInfo();
  *(s2.cgpaPtr)=9.5;
 s1.getInfo();//this is the problem of shallow copy i.e we make our deepcopy in which we  make copy of dyanmic memory input. as (deep copy is not made by compiler).

}
///////////////////////////////////////////////////////////////////////////////////////////////

*/


//deep and shallow concept   
# include<iostream>
using namespace std;
class student{
public:
string name;
double *cgpaPtr;

student (string name,double cgpa){//constructor of s1

    this->name=name;
   cgpaPtr=new double;
   *cgpaPtr=cgpa;

}
student(student &s1){  // deep copy contructor ha its required some constructor also to be copy and it is not made by compiler it should be made by user.[constructor of s2]
    this->name=s1.name;
    cgpaPtr=new double;
    *cgpaPtr=*s1.cgpaPtr;
}
void getInfo(){
cout<<"name:"<<name<<endl;
cout<<"cgpa:"<<*cgpaPtr<<endl;
}
};
int main(){
student s1("rahul",5.6);

 student s2(s1);//another Rahul 

 s1.getInfo();
  *(s2.cgpaPtr)=9.5;
 s1.getInfo();//problem resolved.
 //now check for another Rahul
 s2.name="neha"; //you could also change the name of Rahul 
 s2.getInfo();

}
///////////////////////////////////////////////////////////////////////////////////////////////
