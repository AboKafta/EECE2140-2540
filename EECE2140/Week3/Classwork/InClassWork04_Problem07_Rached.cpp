//By Georgy Rached, October 2, 2026, EECE2140
//This program prints a inverted right triangle

#include <iostream>
using namespace std;

int main() {

    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}