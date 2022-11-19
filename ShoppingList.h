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
    void insertItem();
    void printNodes();
};
