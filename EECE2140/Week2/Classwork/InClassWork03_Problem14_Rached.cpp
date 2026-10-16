// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code displays number of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    int digits = 1;
    cout << "Enter positive integer: ";
    cin >> n;

    while (n/10 != 0)
    {
        digits++;
        n /= 10;
    }

    cout << "Digits: " << digits << endl;

    return 0;   
}