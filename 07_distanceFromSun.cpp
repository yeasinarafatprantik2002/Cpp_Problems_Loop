#include <iostream>
using namespace std;

int main()
{
    double distance, totalDistance = 0;
    string planetName[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    for (int i = 0; i < 8; i++)// for loop to get the distance of each planet
    {
        cout << "Enter the distance of " << planetName[i] << " from the sun: ";
        if (cin >> distance) // if the input is a number
        {
            totalDistance += distance;
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
    cout << "The average distance of the planets from the sun is " << totalDistance / 8 << endl;

    return 0;
}