#include "Item.h"
#include "ShoppingList.h"
#include <iostream>

using namespace std;

int main()
{
    ShoppingList list = ShoppingList();
    list.insertItem("eg", 1.00, 900);
    list.insertItem("tomeito", 1.50, 9);
    list.displayList();
}