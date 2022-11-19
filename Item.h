#include <iostream>

using namespace std;

class Item
{
private:
    string name;
    double price;
    int quantity;
    Item *next;

public:
    Item(string name, double price, int quantity);
    Item();
    string getName()
    {
        return name;
    }
};
