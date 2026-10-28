//Georgy Rached, EECE2140, October 28 2026
//This program does the power of a number
//Assisted with Claude Opus 5.5
#include <iostream>
using namespace std;

int count = 0;

double power(double x, int n);

double power(double x, int n)
{
    count++;

    if (n == 0)                
        return 1;

    if (n < 0)              
        return (1 / power(x, -n));

    double half = power(x, n / 2);   

    if (n % 2 == 0)
        return half * half;          
    else
        return x * half * half;     
}

int main()
{
    double x;
    int n;

    cout << "x and n: ";
    if (!(cin >> x >> n))
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    double result = power(x, n);

    int loopMults = (n < 0) ? - n : n; 

    cout << x << "^" << n << " = " << result;
    cout << " (" << count << " calls, a loop needs " << loopMults << " multiplications)" << endl;

    return 0;
}
