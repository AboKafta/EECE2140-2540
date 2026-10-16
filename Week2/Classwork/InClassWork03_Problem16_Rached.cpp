// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code checks if a number is prime
#include <iostream>
using namespace std;

int main()
{
    int n;
    int prime = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
        }
    }
    if (prime == 1 && n != 2)
    {
        cout << "Not prime" << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }
    return 0;   
}