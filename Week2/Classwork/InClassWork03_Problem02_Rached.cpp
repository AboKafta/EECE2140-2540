// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code determines if a device ID is even or odd

#include <iostream>
using namespace std;

int main() 
{
    int id;
    int even;
    cout << "Enter device ID: ";
    cin >> id;

    even = id % 2;
    if (even == 0) {
        cout << "Even device ID" << endl;
    } else {
        cout << "Odd device ID" << endl;
    }
    
    return 0;
}