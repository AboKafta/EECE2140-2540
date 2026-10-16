// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code prints sample numbers from 1 thru n on one line

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter sample count: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;   
}