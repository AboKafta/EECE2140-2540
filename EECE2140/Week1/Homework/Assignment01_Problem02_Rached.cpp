//By Georgy Rached, September 18, 2026, EECE2140
//This program takes the input of a number of seconds and sorts them through hours, minutes and seconds

//Including iostream and namespacestd
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //defining variables
    int seconds = 0;
    int hours = 0;
    int minutes = 0;

    //asking for input
    cout << "Enter ela
    psed seconds: ";
    cin >> seconds;
    
    //math conversions
    hours = seconds/3600;
    minutes = (seconds % 3600) / 60;
    int leftoverSeconds = seconds % 60;
    int check = hours*3600 + minutes*60 + leftoverSeconds;

    //displaying output
    cout << seconds << " seconds is:" << endl;
    cout << "   " << hours << " hours" << endl;
    cout << "   " << minutes << " minutes" << endl;
    cout << "   " << leftoverSeconds << " seconds" << endl;
    cout <<"Check: " << hours << "*3600 + " << minutes << "*60 + " << leftoverSeconds << " = " << check << endl;

    //to signal the program ended succesfully
    return 0;
}