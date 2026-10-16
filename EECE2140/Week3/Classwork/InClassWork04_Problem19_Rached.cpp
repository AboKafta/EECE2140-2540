//By Georgy Rached, October 2, 2026, EECE2140
//This program reads an odd integer and does an X

#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cout << "Enter odd n: ";
    cin >> n;

    if (n % 2 == 0 || n < 1)
    {   
        cout << "n must be odd" << endl; 
        return 0; 
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (j == i || j == n - i - 1)
                cout << "*";
            
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}