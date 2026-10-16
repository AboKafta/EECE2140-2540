//By Georgy Rached, September 18, 2026, EECE2140
//This program takes in length and width and calculates the area and perimeter of a square

//Including Libraries
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //defining variables
    double length = 0;
    double width = 0;

    //asking for input
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;

    //calculations and display
    cout << "Area      = " << length*width << endl;
    cout << "Perimeter = " << 2*(length+width) << endl;

    //to signal the program ended succesfully
    return 0;

    /*When a negative is inputted to width, an area of -50 is outputted.
    The program should instead stop the user and prompt them to enter a 
    non-negative number since area can't be negative for a rectangle. An if
    statement is mising and would fix the problem*/
    
}