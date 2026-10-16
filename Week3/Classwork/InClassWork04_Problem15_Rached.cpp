//By Georgy Rached, October 2, 2026, EECE2140
//This program makes an hourglass
#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";

        for (int k = 0; k < (2 * (n - i) - 1); k++)
            cout << "*";

        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int k = 0; k < (n - i); k++)
            cout << " ";

        for (int j = 0; j < (2 * i - 1); j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}