// implement fruit shop wiht the given class diagrams
#include <iostream>
using namespace std;
class fruit
{
    string name;

public:
    fruit(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};
class fruitInGram : public fruit
{
    double availableKg;
    double pricePerKg;

public:
    fruitInGram(string name, double availableKg, double pricePerKg) : fruit(name)
    {
        this->availableKg = availableKg;
        this->pricePerKg = pricePerKg;
    }
    bool checkAvailability(double required)
    {
        if (required > availableKg)
            return false;
        else
            return true;
    }
    double getAvailableKgs()
    {
        return availableKg;

    }
    double getPricePerKg()
    {
        return pricePerKg;
    }
    void sell(int required)
    {
        if (checkAvailability(required))
        {
            availableKg -= required;
        }
    }
};
class fruitInPcs : public fruit
{
    int availablePcs;
    double pricePerPc;

public:
    fruitInPcs(string name, int availablePcs, double pricePerPc) : fruit(name)
    {
        this->availablePcs = availablePcs;
        this->pricePerPc = pricePerPc;
    }
    bool checkAvailability(double required)
    {
        if (required > availablePcs)
            return false;
        else
            return true;
    }
    double getAvailablePcs()
    {
        return availablePcs;
    }
    double getPricePerPc()
    {
        return pricePerPc;
    }
    void sell(int required)
    {
        if (checkAvailability(required))
        {
            availablePcs -= required;
        }
    }
};
class Sale
{
public:
    double sellFruitInKg(fruitInGram &fruit, double requiredKg)
    {
        if (fruit.checkAvailability(requiredKg))
        {
            double totalPrice = requiredKg * fruit.getPricePerKg();
            fruit.sell(requiredKg);
            cout << "Sold " << requiredKg << " kg of " << fruit.getName() << ". Total: Rs." << totalPrice << endl;
            return totalPrice;
        }
        else
        {
            cout << "Not enough stock for " << fruit.getName() << " in kg.\n";
            return 0;
        }
    }

    double sellFruitInPcs(fruitInPcs &fruit, int requiredPcs)
    {
        if (fruit.checkAvailability(requiredPcs))
        {
            double totalPrice = requiredPcs * fruit.getPricePerPc();
            fruit.sell(requiredPcs);
            cout << "Sold " << requiredPcs << " pieces of " << fruit.getName() << ". Total: Rs." << totalPrice << endl;
            return totalPrice;
        }
        else
        {
            cout << "Not enough stock for " << fruit.getName() << " in pieces.\n";
            return 0;
        }
    }
};

int main()
{
    fruitInGram apple("Apple", 4.0, 9.0); 
    fruitInPcs banana("Banana", 20, 1.0);  

    Sale sale;
    sale.sellFruitInKg(apple, 5);    
    sale.sellFruitInPcs(banana, 10); 

return 0;
}


