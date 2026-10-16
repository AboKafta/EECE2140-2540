//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program reads an array and see if the sensor is connected
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    bool found = false;
    int sensorIds[SIZE];
    int check;
    int numberFound = 0;

    cout << "Enter the IDs of the 8 connected sensors: ";
    for (int i = 0; i < SIZE; i++)
        cin >> sensorIds[i];
    
    cout << "Sensor ID to check: ";
    cin >> check;

    for (int i = 0; !found && i < SIZE; i++)
    {
        if (sensorIds[i] == check)
        {
            found = true;
            numberFound = i;
        }
    }
        
    if (found)
    {
        cout << "Yes" << endl;
        cout << "Sensor " << check << " is on channel " << numberFound << endl;
    }
    
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
