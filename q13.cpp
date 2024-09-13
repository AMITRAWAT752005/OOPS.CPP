/*Create class SavingsAccount. Use a static variable annualInterestRate to store the 
annual interest rate for all account holders. Each object of the class contains a private 
instance variable savingsBalance indicating the amount the saver currently has on 
deposit. Provide method calculateMonthlyInterest() to calculate the monthly 
interest by multiplying the savingsBalance by annualInterestRate divided by 
12.This interest should be added tosavingsBalance. Provide a static method 
modifyInterestRate() that sets the annualInterestRate to a new value. Write a 
program to test class SavingsAccount. Instantiate two savingsAccount objects, 
saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. Set 
annualInterestRate to 4%, then calculate the monthly interest and print the new 
balances for both savers. Then set the annualInterestRate to 5%, calculate the next 
month’s interest and print the new balances for both savers.*/
#include <iostream>
using namespace std;

class SavingsAccount {
private:
    float savingsBalance; 
    static float annualInterestRate; 

public:
   
    SavingsAccount(float balance) {
        savingsBalance = balance;
    }

    
    void calculateMonthlyInterest() {
        float monthlyInterest = (savingsBalance * annualInterestRate) / 12;
        savingsBalance += monthlyInterest;
    }

    
    static void modifyInterestRate(float newRate) {
        annualInterestRate = newRate;
    }

    
    void displayBalance() {
        cout << "Current Balance: Rs " << savingsBalance << endl;
    }
};


float SavingsAccount::annualInterestRate = 0.0;

int main() {
    
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);
    
    SavingsAccount::modifyInterestRate(0.04);

    
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    
    cout << "Balances after applying 4% interest for one month:" << endl;
    cout << "Saver 1: "; 
    saver1.displayBalance();
    cout << "Saver 2: "; 
    saver2.displayBalance();

    
    SavingsAccount::modifyInterestRate(0.05);

    
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "\nBalances after applying 5% interest for one month:" << endl;
    cout << "Saver 1: ";
    saver1.displayBalance();
    cout << "Saver 2: ";
    saver2.displayBalance();

return 0;
}