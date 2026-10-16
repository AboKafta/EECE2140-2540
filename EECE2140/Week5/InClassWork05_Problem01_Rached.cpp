//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program reads and prints temperature sensor readings
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int readings[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter reading from sensor " << (i + 1) << " (C): ";
        cin >> readings[i];
    }
   
    cout << endl;
    cout << "Sensor readings:" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "readings[" << i <<"] = " << readings[i] << " C" <<endl;
    }

    cout << "Newest to oldest: ";
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << readings[i] << " ";
    }
    cout << endl;

    return 0;

    //The prompt uses i+1 while the subscript is i
    //because in c++, arrays start at 0 instead of 1
    //and in real life, we start at 1 usually when doing counting
}