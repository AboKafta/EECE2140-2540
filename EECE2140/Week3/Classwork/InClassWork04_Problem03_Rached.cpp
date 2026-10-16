//By Georgy Rached, October 2, 2026, EECE2140
//This program prints an L

#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i<n ; i++) {
        cout << "*" << endl;
    }

    for (int i = 0; i<n; i++) {
        cout << "*";
    }

    cout << endl;
    return 0;
}