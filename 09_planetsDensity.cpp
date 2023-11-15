#include <iostream>
using namespace std;

int main()
{
    double mass, diameter, volume, totalDensity = 0.0, averageDensity;
    string planetName[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    for (int i = 0; i < 8; i++) // for loop to get the mass and diameter of each planet
    {
        cout << "Enter the mass of " << planetName[i] << ": ";
        if (cin >> mass) // if the input is a number
        {
            cout << "Enter the diameter of " << planetName[i] << ": ";
            if (cin >> diameter) // if the input is a number
            {
                volume = 3.14159 * (diameter / 2.0) * (diameter / 2.0) * (diameter);
                cout << "The volume of " << planetName[i] << " is " << volume << endl;
                cout << endl;
                cout << "The density of " << planetName[i] << " is " << mass / volume << endl;
                cout << endl;
                totalDensity += mass / volume;
            }
            else // if the input is not a number
            {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                i--;
            }
        }
        else // if the input is not a number
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        }
    }

    averageDensity = totalDensity / 8;
    cout << "The average density of the planets is " << averageDensity << endl;

    return 0;
}