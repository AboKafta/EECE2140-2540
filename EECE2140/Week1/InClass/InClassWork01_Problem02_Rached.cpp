//By Georgy Rached, September 18, 2026, EECE2140
//This program does all four basic math operations on 2 inputs and gives the results

//Including Libraries
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //Initializing Variables
    int number1 = 15.0;
    int number2 = 2.0;

    //Print statements and arimethic
    cout << number1 << " + " << number2 << " = " << (number1+number2)<< endl;
    cout << number1 << " - " << number2 << " = " << (number1-number2)<< endl;
    cout << number1 << " * " << number2 << " = " << (number1*number2)<< endl;
    cout << number1 << " / " << number2 << " = " <<  (number1/number2)<< endl;

    //to signal the program ended succesfully
    return 0;

    /* The last line changed because since we intialized the variabels as int, 
    the compiler will give out an int instead of a double and 15/2 isn't an even
    divison*/
}