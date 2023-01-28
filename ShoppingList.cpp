#include "ShoppingList.h"
#include "Item.h"
#include <iostream>

using namespace std;
ShoppingList::ShoppingList()
{
    this->head = nullptr;
    this->tail = nullptr;
    return;
}
void ShoppingList::insertItem(string name, double price, int quantity)
{
    Item *nextNode = new Item(name, price, quantity);
    if (head == nullptr && tail == nullptr)
    {
        this->head = nextNode;
        this->tail = nextNode;
    }
    else
    {
        this->tail->setNextPointer(nextNode);
        this->tail = nextNode;
    }
}

void ShoppingList::displayList()
{
    Item *c = this->head;
    while (c != nullptr)
    {
        cout << "Item: " << c->getName() << endl;
        cout << "Price: " << c->getPrice() << endl;
        cout << "Amount: " <<c->getQuantity() << endl;
        cout << endl;
        c = c->getNextPointer();
    }
}
void ShoppingList::deleteItem()
{
    tail = nullptr;
}
double ShoppingList::totalCost(){
    double amount = 0.0;
    Item *c = this->head;
    while(c != nullptr){
        double price = c->getPrice() * c->getQuantity();
        amount = amount + price;
        c = c->getNextPointer();
    }
    return amount;

}
