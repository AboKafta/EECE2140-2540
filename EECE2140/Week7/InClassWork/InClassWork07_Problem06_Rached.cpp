//Georgy Rached, EECE2140, October 28 2026
//This program prints every palindromic serial number in a range and how many there are
//Assisted with Claude Opus 5.5

#include <iostream>
using namespace std;

int reverseDigits(int n);
bool isPalindrome(int n);

//Reverses the digits of n using % 10 and / 10
int reverseDigits(int n)
{
    int reversed = 0;
 
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
 
    return reversed;
}

//Returns true if n reads the same forwards and backwards
bool isPalindrome (int n)
{
    int reversed = reverseDigits(n);

    if (n == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int low = 0;
    int high = 0;
    int total = 0;
 
    cout << "Serial range: ";
    if (!(cin >> low >> high) || low < 0 || high < 0 || low > high)
    {
        cout << "Invalid input" << endl;
        return 1;
    }
 
    int range = high - low + 1;
 
    for (int i = 0; i < range; i++)
    {
        int serial = low + i;
 
        if (isPalindrome(serial))
        {
            if (total > 0)
                cout << " ";
 
            cout << serial;
            total++;
        }
    }
    cout << endl;
 
    cout << total << " palindromic serials" << endl;
 
    return 0;
}
