#include <iostream>
using namespace std;

int main()
{
    double grade, totalGrade = 0.0;
    for (int i = 0; i < 5; i++)// for loop to get the grade of each student
    {
        cout << "Enter the grade of student " << i + 1 << ": ";
        if (cin >> grade)
        {
            totalGrade += grade; // totalGrade = totalGrade + grade
        }
        else
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        }
    }
    cout << "The average grade is: " << totalGrade / 5 << endl;

    return 0;
}