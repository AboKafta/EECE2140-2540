//By Georgy Rached, October 2, 2026, EECE2140
//This program prints coloumn and rows of stars or - depending if odd or even

#include <iostream>
using namespace std;

int main() {

    int row = 0;
    int column = 0;

    cout << "Enter rows: ";
    cin >> row;

    cout << "Enter columns: ";
    cin >> column;

    for (int i = 0; i<row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j<column; j++)
            {
                cout << "*";
            }
        }

        else
        {
            for (int j = 0; j<column; j++)
            {
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}