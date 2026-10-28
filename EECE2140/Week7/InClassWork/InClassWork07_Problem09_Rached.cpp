//Georgy Rached, EECE2140, October 28 2026
//This program moves a stack of wafers from station A to station C with recursion and counts the moves
//Assisted with Claude Opus 5.5

#include <iostream>
using namespace std;

int moves = 0;

void transfer(int n, char from, char to, char spare, bool show);

//Moves n wafers from one station to another using the spare, and prints each move if show is true
void transfer(int n, char from, char to, char spare, bool show)
{
    if (n == 0)
        return;

    transfer(n - 1, from, spare, to, show);

    moves++;
    if (show)
        cout << moves << ". wafer " << n << ": " << from << " -> " << to << endl;

    transfer(n - 1, spare, to, from, show);
}

int main()
{
    int n = 0;

    cout << "Wafers: ";
    if (!(cin >> n) || n < 1 || n > 30)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    bool show = (n <= 4);
    transfer(n, 'A', 'C', 'B', show);

    int power = 1;
    for (int i = 0; i < n; i++)
    {
        power = power * 2;
    }

    cout << moves << " moves (2^" << n << " - 1 = " << power - 1 << ")" << endl;

    return 0;
}
