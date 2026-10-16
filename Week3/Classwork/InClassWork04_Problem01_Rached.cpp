//By Georgy Rached, October 2, 2026, EECE2140
//This program reads a positive interger and uses a for loop to pring n starts, one at a time

#include <iostream>
using namespace std;

int main() {
    
    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i<n; i++)
    {    
        cout << "*" << endl;
    }
    return 0;
}