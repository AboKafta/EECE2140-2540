//By Georgy Rached, October 2, 2026, EECE2140
//This program prints a right triangle that hollowed

#include <iostream>
using namespace std;

int main() {

    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == (n - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}