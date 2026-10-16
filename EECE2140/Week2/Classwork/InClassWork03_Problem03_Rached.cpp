//Georgy and Brodie 09/25/2026 EECE2140
//This program reads voltage and gives warning
#include <iostream>
using namespace std;

int main() {

    double voltage = 0;
    cout << "Enter voltage: ";
    cin >> voltage;

    if ( voltage < 4.5)
        cout << "Low" << endl;

    else if ( voltage > 5.5)
        cout << "High" << endl;

    else
        cout <<"Normal" << endl;

    return 0;
}
