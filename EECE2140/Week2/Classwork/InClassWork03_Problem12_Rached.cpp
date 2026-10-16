// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code asks for a speed until its 0-120

#include <iostream>
using namespace std;

int main()
{
    int speed;
    cout << "Enter speed (0-120): ";
    cin >> speed;

    while (speed < 0 || speed > 120) {
        cout << "Enter speed (0-120): ";
        cin >> speed;
    }

    cout << "Accepted: " << speed << endl;

    return 0;   
}