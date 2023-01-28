#include "Item.h"
#include "ShoppingList.h"
#include <iostream>

using namespace std;

int main()
{
    ShoppingList list = ShoppingList();

    cout << "Choose an Option" << endl;
    cout << "a - Add to Shopping list" << endl;
    cout << "r - Remove from Shopping list" << endl;
    cout << "d - Display the shopping list" << endl;
    cout << "t - print the total cost" << endl;
    cout << "q - Quit" << endl;

    char option;

    cin >> option;
    while (option != 'q')
    {
        if (option == 'a')
        {
            string Name;
            int price;
            int quantity;
            cout << "What is the name of the item?" << endl;
            cin >> Name;
            cout << "How much is it?" << endl;
            cin >> price;
            cout << "how many are you buying?" << endl;
            cin >> quantity;

            list.insertItem(Name, price, quantity);
        }
        if (option == 'r')
        {
            list.deleteItem();
        }
        if (option == 'd')
        {
            list.displayList();
        }
        if (option == 't')
        {
            double total = list.totalCost();
            cout <<"The total price is: $"<< total << endl;
        }
        cout << "Choose an Option" << endl;
        cout << "a - Add to Shopping list" << endl;
        cout << "r - Remove from Shopping list" << endl;
        cout << "d - Display the shopping list" << endl;
        cout << "t - print the total cost" << endl;
        cout << "q - Quit" << endl;
        cin >> option;
    }
}
