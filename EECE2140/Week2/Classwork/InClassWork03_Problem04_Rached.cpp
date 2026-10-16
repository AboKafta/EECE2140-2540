// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code determines size of weight

#include <iostream>
using namespace std;

int main() 
{
    int weight;
    cout << "Enter weight (kg): ";
    cin >> weight;
    
    if (weight <= 2)
    {
        cout << "Small" << endl;
    }
    else if (weight <= 10)
    {
        cout << "Medium" << endl;
    }
    else
    {
        cout << "Large" << endl;
    }

    return 0;   
}