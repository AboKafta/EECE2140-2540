//By Georgy Rached, September 18, 2026, EECE2140
//This program converts how much cent it is givne into the greatest, equal denominations of coins it can give

//Including Libraries
#include <iostream>
using namespace std;

//Main Function
int main()
{
    //defining variables
    int pennies = 0;
    int quarters = 0;
    int dime = 0;
    int nickels = 0;

    //asking for input
    cout << "Enter amount in pennies: ";
    cin >> pennies;
    
    //math conversions
    quarters = pennies/25;
    dime = (pennies % 25) / 10;
    nickels = (dime % 10) / 5;
    int leftoverPennies = pennies % 5;

   cout << pennies << " cents = ";
   cout << quarters << " quarters, " << dime << " dime, " << nickels << " nickels, " << leftoverPennies << " pennies" << endl;
    
   //to signal the program ended succesfully
   return 0;
}