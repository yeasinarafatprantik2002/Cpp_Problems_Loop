#include <iostream>
using namespace std;

int main()
{
    double totalAmount = 0.0, employee, totalEmployeeAmount = 0.0;
    for (int i = 0; i < 4; i++) // for loop to get the amount of money for each employee
    {
        for (int j = 0; j < 7; j++) // for loop to get the amount of money for each day
        {
            cout << "Enter the amount of money for employee " << i + 1 << " on day " << j + 1 << ": ";
            if (cin >> employee) // if the input is a number
            {
                totalEmployeeAmount += employee;
            }
            else // if the input is not a number
            {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                j--;
            }
        }
        cout << "The total amount of money for employee " << i + 1 << " is: " << totalEmployeeAmount << endl;
        totalAmount += totalEmployeeAmount;
        totalEmployeeAmount = 0.0;
    }
    cout << "The total amount of money is: " << totalAmount << endl;

    return 0;
}