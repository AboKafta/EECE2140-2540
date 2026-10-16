//Georgy and Brodie 09/25/2026 EECE2140
//This program reads temperature
#include <iostream>
using namespace std;

int main() {

    double temperature = 0;
    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature < 0)
        cout << "Freezing" << endl;
    else
        cout << "Not Freezing" << endl;

    return 0;
}
