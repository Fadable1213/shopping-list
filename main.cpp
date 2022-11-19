#include "Item.h"
#include <iostream>

using namespace std;

int main()
{
    Item item = Item("egg", 1.00, 1);
    string name = item.getName();
    cout << name << endl;
}