//Georgy and Brodie 09/25/2026 EECE2140
//This program reads numbers until a threshold
#include <iostream>
using namespace std;

int main() {

    int tracker = 0;
    int reading;

    cout << "Enter reading (-1 to stop): ";
    cin >> reading;

    while (reading != -1)
    {
        if (reading>=70)
            tracker++;

        cout << "Enter reading (-1 to stop): ";
        cin >> reading;
    }

    cout << "Reading at least 70: " << tracker << endl;
    
    return 0;
}
