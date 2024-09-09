# include<iostream>
using namespace std;
class teacher {
private:
float salary;
string change_dept;
public:
string name;
  teacher(string name){
    cout<<"they all are from cs department"<<endl;
    this->name=name;
        
  }

void setSalary(float salary){
    this->salary=salary;
}
void setChange_dept(string change_dept){
    this->change_dept=change_dept;
}
float getSalary(){
    return salary;
}
string getChange_dept(){
    return change_dept;
}

void getInfo(){
cout<<name<<endl;
    cout<<change_dept<<endl;
    cout<<salary<<endl;

}
};

int main(){
  
    string name;
    cout<<"enetr name"<<endl;
    cin>>name;
    teacher t1(name);
  string change_dept;
  float salary;
    
    cout<<"enter change dept"<<endl;
    cin>>change_dept;
    t1.setChange_dept(change_dept);
    cout<<"enetr salary"<<endl;
    cin>>salary<<endl;
     t1.setSalary(salary);

   t1.getInfo();

return 0;

  
}