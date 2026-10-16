//By Georgy Rached, October 2, 2026, EECE2140
//This program prints a number triangle that goes to n number counted

#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int number = 1;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << number;
            if (j < i)
            {
                cout << " ";
            }
            number++;
        }
        cout << endl;
    }

    return 0;
}