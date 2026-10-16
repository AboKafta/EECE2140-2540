//Georgy and Brodie 09/25/2026 EECE2140
//This program reads resistance and max voltage and gives power for each voltage level

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    int voltageMax = 0;
    double resistance = 0;
    double power = 0;
    int numberProblem = 1;
    double voltage = 1;

    cout << "Enter maximum voltage: ";
    cin >> voltageMax;

    cout << "Enter resistance: ";
    cin >> resistance;

    if (voltageMax > 0 )
    {
        for (int i=1; i <= voltageMax; i++)
            {
                power = (voltage*voltage)/(resistance);
                cout << numberProblem << " V: " << fixed << setprecision(2) << power << " W" << endl; 
                numberProblem++;
                voltage++;
            }
    }
    else
    {
        cout << "Voltage below 0" << endl;

    }
    
    return 0;
}
