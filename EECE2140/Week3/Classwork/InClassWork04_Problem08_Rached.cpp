//By Georgy Rached, October 2, 2026, EECE2140
//This program prints a right aligned triangle

#include <iostream>
using namespace std;


int main() {

    int n = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {   
        for (int k = n-1; k>i ; k--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}