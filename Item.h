#ifndef ITEM_H
#define ITEM_H

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

    Item()
    {
    }
    string getName()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    Item *getNextPointer()
    {
        return next;
    }
    void setNextPointer(Item *nextNode);
};
#endif
