#include <iostream>
using namespace std;

int main()
{
    double temperature, totalTemperature = 0.0, averageTemperature, humidity, totalHumidity = 0.0, averageHumidity;

    for (int i = 1; i <= 5; i++)// for loop to get the temperature of each day
    {
        cout << "Enter the temperature for day " << i << ": ";
        if (cin >> temperature) // if the input is a number
        {
            totalTemperature += temperature;
        }
        else // if the input is not a number
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        }
        averageTemperature = totalTemperature / 5; // averageTemperature = totalTemperature / 5
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter the humidity for day " << i << ": ";
        if (cin >> humidity) // if the input is a number
        {
            totalHumidity += humidity;
        }
        else // if the input is not a number
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        }
        averageHumidity = totalHumidity / 5; // averageHumidity = totalHumidity / 5
    }

    cout << "The average temperature is: " << averageTemperature << endl;
    cout << "The average humidity is: " << averageHumidity << endl;

    return 0;
}