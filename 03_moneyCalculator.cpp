#include <iostream>
using namespace std;

int main()
{
    double amount, totalAmount = 0.0;
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                      "October", "November", "December"};

    for (int i = 0; i < 12; i++)// for loop to get the amount of money for each month
    {
        cout << "Enter the amount of money for month " << month[i] << ": ";
        if (cin >> amount)// if the input is a number
        {
            totalAmount += amount;
        }
        else// if the input is not a number
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        }
    }
    cout << "The total amount of money is: " << totalAmount << endl;

    return 0;
}