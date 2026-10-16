//By Georgy Rached, September 18, 2026, EECE2140
//This program displays a variable and its byte size, value, and address

//Including Libraries
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //declaring variables
    int studentSection = 42;
    char gradeSample = 'A';
    bool submissionTime = true;
    double voltageMeasure = 3.3;

    //making table
    cout << "Variable\tBytes\tValue\tAddress\n";
    cout << "students\t" << sizeof(studentSection) << "\t" << studentSection << "\t" << &studentSection << endl;
    cout << "grade\t\t" << sizeof(gradeSample) << "\t" << gradeSample << "\t" << &gradeSample << endl;
    cout << "onTime\t\t" << sizeof(submissionTime) << "\t" << submissionTime << "\t" << &submissionTime << endl;
    cout << "voltage\t\t" << sizeof(voltageMeasure) << "\t" << voltageMeasure << "\t" << &voltageMeasure << endl;

    //to signal the program ended succesfully
    return 0;  

    //all four of the sizeof() matched to what they were expected.
}