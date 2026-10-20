//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program ranks motors by temperature without moving the data

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 5;
    double tempC[SIZE];
    string names[SIZE] = {"M1", "M2", "M3", "M4", "M5"};
    double* rank[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Temperature of " << names[i] << " (C): ";
        cin >> tempC[i];

        if (!cin)
        {
            cout << "Invalid input" << endl;
            return 1;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        rank[i] = &tempC[i];
    }

    for (int i = 0; i < SIZE - 1; i++)
    {
        double** best = &rank[i];

        for (int j = i + 1; j < SIZE; j++)
        {
            if (*rank[j] > **best || (*rank[j] == **best && rank[j] < *best))
            {
                best = &rank[j];
            }
        }

        double* temp = rank[i];
        rank[i] = *best;
        *best = temp;
    }

    for (int k = 0; k < SIZE; k++)
    {
        cout << (k + 1) << ". " << names[rank[k] - tempC] << " " << *rank[k] << " C" << endl;
    }

    cout << "data order: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << tempC[i] << " ";
    }
    cout << endl;

    double& hottest = *rank[0];
    hottest -= 10;

    cout << names[rank[0] - tempC] << " after cooling: " << hottest << " C" << endl;

    cout << "data order: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << tempC[i] << " ";
    }
    cout << endl;

    return 0;
}