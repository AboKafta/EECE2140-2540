// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = n; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;   
}