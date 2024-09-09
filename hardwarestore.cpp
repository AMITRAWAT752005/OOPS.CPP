/*Create a class called Invoice that a hardware store might use to represent an invoice
for an item sold at the store. An Invoice should include four pieces of information
as instance.
Data Members ‐
• partNumber (type String)
• partDescription (type String)
• quantity of the item being purchased (type int)
• price_per_item (type double)
Your class should have a constructor that initializes the four instance variables.
Provide a set and a get method for each instance variable. In addition, provide a
method named getInvoiceAmount() that calculates the invoice amount (i.e.,
multiplies the quantity by the price per item), then returns the amount as a double
value. If the quantity is not positive, it should be set to 0. If the price per item is not
positive,it should be set to0.0. Write a test application named invoiceTest that
demonstrates class Invoice’s capabilities.*/

#include<iostream>
#include<string>
using namespace std;
class invoice
{
    string partNumber;
    string partDis;
    int quantity;
    double price;
    public:
    invoice(string partNumber,string partDis,int quantity,double price)
    {
        this->partNumber=partNumber;
        this->partDis=partDis;
        this->quantity=quantity;
        this->price=price;
    }
    void setNumber(string partNumber)
    {
        this->partNumber=partNumber;
    }
    void setDis(string partDis)
    {
        this->partDis=partDis;
    }
    void setQuantity(int quantity)
    {
        if(quantity<0)
            this->quantity=0;
        else
            this->quantity=quantity;
    }
    void setPrice(double price)
    {
        if(price<0)
            this->price=0.0;
        else
            this->price=price;
    }
    double amount()
    {
        return quantity*price;
    }
};
int main()
{
    invoice ob(" "," ",0,0.0);
    string number;
    string dis;
    int quantity;
    double price;
    double amount;
    
    cout<<"Enter the number"<<endl;
    cin>>number;
    ob.setNumber(number);

    cout<<"Enter the discription"<<endl;
    cin>>dis;
    ob.setDis(dis);

    cout<<"Enter the quantity"<<endl;
    cin>>quantity;
    ob.setQuantity(quantity);
    
    cout<<"Enter the price"<<endl;
    cin>>price;
    ob.setPrice(price);

    amount=ob.amount();
    cout<<"Amount:"<<amount<<endl;
}