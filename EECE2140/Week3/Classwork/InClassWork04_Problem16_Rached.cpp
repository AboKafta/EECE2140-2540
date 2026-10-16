//By Georgy Rached, October 2, 2026, EECE2140
//This program prints a rectangle that is hollow

#include <iostream>
using namespace std;

int main() {

    int row = 0;
    int column = 0;

    cout << "Enter rows: ";
    cin >> row;

    cout << "Enter columns: ";
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == (row - 1) || j == 0 || j == (column - 1))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}