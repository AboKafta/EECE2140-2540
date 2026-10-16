//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program swaps two sensors and their readings by sensor ID

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int sensorIds[SIZE];
    int pressure[SIZE];
    int id1;
    int id2;
    bool found1 = false;
    bool found2 = false;
    int channel1 = 0;
    int channel2 = 0;

    cout << "Enter the IDs of the 6 connected sensors: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> sensorIds[i];
    }

    cout << "Enter 6 pressure readings (kPa): ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> pressure[i];
    }

    cout << "Before swap:" << endl;
    cout << "IDs: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << sensorIds[i] << " ";
    }
    cout << endl;

    cout << "Readings: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << pressure[i] << " ";
    }
    cout << endl;

    cout << "First sensor ID to swap: ";
    cin >> id1;
    cout << "Second sensor ID to swap: ";
    cin >> id2;

    for (int i = 0; !found1 && i < SIZE; i++)
    {
        if (sensorIds[i] == id1)
        {
            found1 = true;
            channel1 = i;
        }
    }

    for (int i = 0; !found2 && i < SIZE; i++)
    {
        if (sensorIds[i] == id2)
        {
            found2 = true;
            channel2 = i;
        }
    }

    if (!found1)
    {
        cout << "Sensor " << id1 << " is not connected" << endl;
    }

    if (!found2)
    {
        cout << "Sensor " << id2 << " is not connected" << endl;
    }

    if (!found1 || !found2)
    {
        return 1;
    }

    int temp = sensorIds[channel1];
    sensorIds[channel1] = sensorIds[channel2];
    sensorIds[channel2] = temp;

    temp = pressure[channel1];
    pressure[channel1] = pressure[channel2];
    pressure[channel2] = temp;

    cout << "After swap:" << endl;
    cout << "IDs: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << sensorIds[i] << " ";
    }
    cout << endl;
    
    cout << "Readings: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << pressure[i] << " ";
    }
    cout << endl;

    return 0;
}
