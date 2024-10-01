/* Q Implement a C++ program by defining a class to represent a bank account. The class should include data members for the name of the 
depositor, the account number, the type of account (such as Savings or Current), and the balance amount in the account. The class should 
also have member functions to assign initial values to these data members, deposit an amount into the account, withdraw an amount after 
checking the balance to ensure sufficient funds are available, and display the depositor's name along with the current balance. */

# include<iostream>
using namespace std;

class bank
{
    int Ano;
    string Name;
    string type;
    float amount;
  

public:

    void bank_detail(int account , string name , string Type,float Amount){
      Ano = account;
      Name = name;
       type=Type;
    amount=Amount;
    }
     
  

    void checkout()
    {  
       
        cout << "Account Number : " << Ano << endl;
        cout << "Name : " << Name << endl;
        cout << "type : " << type << endl;
        cout << "Amount : " << amount << endl;

    }

    void calcd(int x)
    {
        amount=amount+x;
         cout<<"new balance: "<<amount<<endl;
    }

    void calcw(int x)
    {
        if(amount>x){
        amount=amount-x;
        cout<<"new balance: "<<amount<<endl;
        }
        else
        cout<<"your withdrawl money is greater than ammount"<<endl;

    }
};

int main()
{int n,x,y;
    cout<< "the no of customer";
    cin>>n;
    bank op[n];
    string name,type;
    int account,amount;
    
  for(int i=0;i<n;i++){
    cout<<"enter the name of customer:";
    cin>>name;
    cout<<"enter the account number :";
    cin>>account;
   cout<<"enter the type of account:";
   cin>>type;
      cout<<"enter the ammount:";
      cin>>amount;
     
        op[i].bank_detail( account , name , type, amount);
        cout<<"PRESS '1' to deposite // Press '2' to withdraw // PRESS '0' to check balance"<<endl;
        cin>>y;
        switch(y)
        {
            case 0:
                op[i].checkout();
                break;
            case 1:
                cout<<"Enter the amount you want to deposite: "<<endl;
                cin>>x;
                 op[i].checkout();
                op[i].calcd(x);
                break;
            case 2:
                cout<<"Enter the amount to withdraw: "<<endl;
                cin>>x;
                 op[i].checkout();
                op[i].calcw(x);
                break;
            default:
                cout<<"Invalid input"<<endl;
                }
      cout<<endl;
   
    }
   

}
