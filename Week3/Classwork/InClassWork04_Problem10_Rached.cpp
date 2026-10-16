//By Georgy Rached, October 2, 2026, EECE2140
//This program prints a number triangle

#include <iostream>
using namespace std;

int main() {

    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    while (n >= 10 || n<1)
    {
        cout << "Re-enter n less than 10: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}