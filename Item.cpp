#include "Item.h"

using namespace std;
Item::Item(string name, double price, int quantity)
{
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}
