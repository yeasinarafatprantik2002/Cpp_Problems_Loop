#include <iostream>
using namespace std;

int main()
{
    double price, quantity, totalCost = 0.0; // totalCost = 0.0 is important
    while (true)// while loop to get the price and quantity of each item
    {
        cout << "Enter the price of the item: ";
        if (!(cin >> price)) // if the input is not a number
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        cin >> price;
        if (price < 0) // if the input is a negative number
        {
            break;
        }
        cout << "Enter the quantity of the item: ";
        cin >> quantity;
        totalCost += price * quantity; // totalCost = totalCost + price * quantity
    }
    cout << "The total cost is: " << totalCost << endl;
}