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
}

/*
Q1: onTime printed as 1. This is because it is a boolean and in code, 1 represents on/true
and 0 represents off/false

Q2: The weird address is grade. It gives A* and it is more weird because g++ treats it as a string
because its a char type instead of a number or boolean.

Q3: I think int is most likely to vary. With statements like char, there can only be one byte.
Another one I can see being different is also double. I think the bytes and the sizes all 
depend on the compiler of the person, but some types do not have many options like char 
which I stated
*/