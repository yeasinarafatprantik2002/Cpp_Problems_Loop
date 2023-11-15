#include <iostream>
using namespace std;

int main()
{
    string comicBookName;
    int comicBook, comicBookCounter = 0;
    while (true) // while loop to get the name and quantity of each comic book
    {
        cout << "\nEnter the name of the comic book: ";
        cin >> comicBookName;
        if (comicBookName == "quit") // if the input is quit
        {
            break;
        }
        cout << "Enter the quantity of the comicbook copies: ";
        if (cin >> comicBook) // if the input is a number
        {
            comicBookCounter += comicBook;
        }
        else
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        cout << "\nThe total quantity of \"" << comicBookName << "\" comicbook is: " << comicBookCounter << endl;
        cout << endl;
        continue;
    }
    return 0;
}