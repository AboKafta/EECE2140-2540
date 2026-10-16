// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code calculated population growth over days

#include <iostream>
using namespace std;

int main()
{
    int population;
    int days;

    cout << "Enter initial population: ";
    cin >> population;

    cout << "Enter days: ";
    cin >> days;

    for (int i = 1; i <= days; i++) 
    {
        population *= 2;
        cout << "Day " << i << ": " << population << endl;
    }

    return 0;   
}