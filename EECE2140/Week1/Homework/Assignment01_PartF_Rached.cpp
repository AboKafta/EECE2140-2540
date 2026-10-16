//By Georgy Rached, September 18, 2026, EECE2140
//This program gives the sum of two numbers

//Including iostream and namespace std
#include <iostream>
using namespace std;

//main function
int main()
{
    //initializing variables
    int first, second;
    int total = 0;

    //input
    cout << "Enter two whole numbers: " ;
    cin >> first >> second;

    //calculations and output
    total = first + second;
    cout << "The sum is " << total << endl;

    //ending function
    return 0;
}