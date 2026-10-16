//Georgy and Brodie 09/25/2026 EECE2140
//This program reads battery percentage and subtracts 7 per minute until 0
#include <iostream>
using namespace std;

int main() {

    int charge = 0;
    int minute = 1;
    cout << "Enter battery percentage: ";
    cin >> charge;

    while (charge > 0) 
    {
        
        charge -= 7;

        if (charge < 0)
            charge = 0;

        cout << "Minute " << minute << ": " << charge << "%" << endl;
        ++minute;
    }
        
    return 0;
}
