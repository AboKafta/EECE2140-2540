//Georgy Rached, EECE2140, October 28 2026
//This program finds the gcd and lcm of two gears and checks if they are a hunting-tooth pair
//Assisted with Claude Opus 5.5

#include <iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b, int g);

//Finds the gcd of a and b with Euclid's rule and prints each call
int gcd(int a, int b)
{
    cout << "gcd(" << a << ", " << b << ")";

    if (b == 0)
    {
        return a;
    }
    else
    {
        cout << " -> ";
        return gcd(b, a % b);
    }
}

//Finds the lcm of a and b using their gcd g, dividing first so a * b does not overflow
int lcm(int a, int b, int g)
{
    return a / g * b;
}

int main()
{
    int gear1 = 0;
    int gear2 = 0;

    cout << "Teeth on gear 1 and gear 2: ";
    if (!(cin >> gear1 >> gear2) || gear1 <= 0 || gear2 <= 0)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    int gcdValue = gcd(gear1, gear2);
    cout << endl;

    int lcmValue = lcm(gear1, gear2, gcdValue);

    cout << "gcd " << gcdValue << ", lcm " << lcmValue << endl;
    cout << "same teeth meet again after " << lcmValue / gear1 << " turns of gear 1 and ";
    cout << lcmValue / gear2 << " turns of gear 2" << endl;

    if (gcdValue == 1)
    {
        cout << "hunting-tooth pair: wear is spread evenly" << endl;
    }
    else
    {
        cout << "not a hunting-tooth pair" << endl;
    }

    return 0;
}