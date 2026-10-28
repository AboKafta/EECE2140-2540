//Georgy Rached, EECE2140, October 28 2026
//This program counts the ways to climb a ladder of n rungs with a loop, memo recursion and plain recursion
//Assisted with Claude Opus 5.5

#include <iostream>
using namespace std;

int naiveCalls = 0;
int memoCalls = 0;

long long waysNaive(int n);
long long waysMemo(int n);
long long waysLoop(int n);

//Counts the ways to climb n rungs with plain recursion and counts each call
long long waysNaive(int n)
{
    naiveCalls++;

    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return waysNaive(n - 1) + waysNaive(n - 2);
}

//Counts the ways to climb n rungs with recursion
long long waysMemo(int n)
{
    static long long memo[91];

    memoCalls++;

    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    if (memo[n] != 0)
        return memo[n];

    memo[n] = waysMemo(n - 1) + waysMemo(n - 2);
    return memo[n];
}

//Counts the ways to climb n rungs with a for loop that keeps only the last two values
long long waysLoop(int n)
{
    if (n == 1)
        return 1;

    long long prev = 1;
    long long curr = 2;

    for (int i = 0; i < n - 2; i++)
    {
        long long temp = prev + curr;
        prev = curr;
        curr = temp;
    }

    return curr;
}

int main()
{
    int n = 0;

    cout << "Rungs (1-90): ";
    if (!(cin >> n) || n < 1 || n > 90)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    long long loopWays = waysLoop(n);
    cout << "loop:  " << loopWays << " ways" << endl;

    long long memoWays = waysMemo(n);
    cout << "memo:  " << memoWays << " ways, " << memoCalls << " calls" << endl;

    if (n <= 40)
    {
        long long naiveWays = waysNaive(n);
        cout << "naive: " << naiveWays << " ways, " << naiveCalls << " calls" << endl;
    }
    else
    {
        cout << "naive: skipped (too slow)" << endl;
    }

    return 0;
}