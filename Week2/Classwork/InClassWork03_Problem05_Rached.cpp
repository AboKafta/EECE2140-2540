//Georgy and Brodie 09/25/2026 EECE2140
//This program reads and gives advice of pump safety
#include <iostream>
using namespace std;

int main() {

    double waterLevel = 0;
    int flag = 0;

    cout << "Enter water level: ";
    cin >> waterLevel;
    cout << "Maintenance flag (0 or 1): ";
    cin >> flag;

    if (flag == 0)
    {
        if (waterLevel < 25)
            cout << "Pump on" << endl;
        else
            cout << "Pump off" << endl;
    } 

    else
    {
        cout << "Pump on maintenance" << endl;
    }

    return 0;
}
