//Georgy and Brodie 09/25/2026 EECE2140
//This program reads total energy over n number od days and prints the total
#include <iostream>
using namespace std;

int main() {
    
    int days = 0;
    int kWh = 0;
    int total = 0;

    cout << "Enter number of days: ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " kWh: ";
        cin >> kWh;
        total += kWh;
    }
    
    cout << "Total: " << total << " kWh" << endl;

    return 0;

}
