#include <iostream>
using namespace std;

int main()
{
    double mass, totalMass = 0;
    string planetName[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    for (int i = 0; i < 8; i++)// for loop to get the mass of each planet
    {
        cout << "Enter the mass of " << planetName[i] << ": ";
        if (cin >> mass) // if the input is a number
        {
            totalMass += mass;
            cout << endl;
        }
        else // if the input is not a number
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        }
    }
    cout << "The total mass of the planets is " << totalMass << endl;

    return 0;
}