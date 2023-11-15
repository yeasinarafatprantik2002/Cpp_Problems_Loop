#include <iostream>
using namespace std;

int main()
{

    double diameter;
    string planetName = "";
    while (true)// while loop to get the diameter of each planet
    {
        cout << "Enter the planet name: ";
        cin >> planetName;
        if (planetName == "Mercury" || planetName == "Venus" || planetName == "Earth" || planetName == "Mars" || planetName == "Jupiter" || planetName == "Saturn" || planetName == "Uranus" || planetName == "Neptune")
        {
            cout << "Enter the diameter of the planet: ";
            if (cin >> diameter) // if the input is a number
            {
                cout << "The diameter of " << planetName << " is " << diameter << endl;
                cout << endl;
            }
            else // if the input is not a number
            {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        else // if the input is not a planet name
        {
            cout << "Invalid input. Please enter a planet name with first later uppercase. exp.(Earth)" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    return 0;
}