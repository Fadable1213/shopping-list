#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H
#include "Item.h"
#include <iostream>

using namespace std;

class ShoppingList
{
private:
    Item item;
    Item *head, *tail;

public:
    ShoppingList();
    void insertItem(string name, double price, int quantity);
    void displayList();
    void deleteItem();
    double totalCost();
};
#endif
