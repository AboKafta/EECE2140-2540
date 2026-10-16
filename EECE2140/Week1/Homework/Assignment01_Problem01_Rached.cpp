//By Georgy Rached, September 18, 2026, EECE2140
//This program outputs the values, series combination, and average of three resistors

//Including iostream and namespace std
#include <iostream>
using namespace std;

//main function
int main ()
{
    //initializing variables
    double resistor1 = 220.0;
    double resistor2 = 330.0;
    double resistor3 = 470.0;

    //arithmetic and assiging variables
    double series = resistor1 + resistor2 + resistor3;

    /*3.0 instead of 3 was added to avoid integer division in case the answer
     was a decimal so it wouldn't be truncated down*/
    double average = series/3.0;

    //outputting to console
    cout << "Resistor 1 has a value of " << resistor1 << " ohms." << endl;
    cout << "Resistor 2 has a value of " << resistor2 << " ohms." << endl;
    cout << "Resistor 3 has a value of " << resistor3 << " ohms." << endl;
    cout << "The series combinations of the resistors equals " << series << " ohms."  << endl;
    cout << "The average values of the resistors equals " << average << " ohms."  << endl;

    //signaling to end main function
    return 0;

    
}