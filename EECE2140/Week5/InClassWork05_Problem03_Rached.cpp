//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program fixes two swapped sensor channels

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int pressure[SIZE];
    int channel1;
    int channel2;

    cout << "Enter 6 pressure readings (kPa): ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> pressure[i];
    }

    cout << "Before swap: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << pressure[i] << " ";
    }
    cout << endl;

    cout << "First channel to swap (0-5): ";
    cin >> channel1;
    cout << "Second channel to swap (0-5): ";
    cin >> channel2;

    if (channel1 < 0 || channel1 >= SIZE || channel2 < 0 || channel2 >= SIZE)
    {
        cout << "Invalid channel" << endl;
        return 1;
    }

    int temp = pressure[channel1];
    pressure[channel1] = pressure[channel2];
    pressure[channel2] = temp;

    cout << "After swap: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << pressure[i] << " ";
    }
    cout << endl;

    return 0;
}
