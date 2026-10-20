//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program is a data logger

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    double buf[SIZE];
    double* w = buf;
    int stored = 0;
    double value = 0;

    cout << "Readings (negative to stop): ";
    cin >> value;

    while (cin && value >= 0)
    {
        *w = value;
        w++;
        if (w == buf + SIZE)
            w = buf;
        stored++;
        cin >> value;
    }

    if (!cin)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    int kept = stored;
    if (kept > SIZE)
        kept = SIZE;

    cout << "stored " << stored << ", kept " << kept << endl;

    if (kept == 0)
        return 0;

    double* oldest = buf;
    if (stored >= SIZE)
        oldest = w;

    double* p = oldest;
    double* maxp = oldest;
    int maxCount = 0;
    double sum = 0;

    cout << "oldest to newest: ";
    for (int count = 0; count < kept; count++)
    {
        if (count > 0)
            cout << " ";
        cout << *p;

        sum += *p;

        if (*p > *maxp)
        {
            maxp = p;
            maxCount = count;
        }

        p++;

        if (p == buf + SIZE)
            p = buf;
    }

    cout << endl;
    double mean = sum / kept;
    int age = kept - 1 - maxCount;

    cout << "mean " << mean << endl;
    cout << "max " << *maxp << " in slot " << (maxp - buf) << ", " << age << " samples old" << endl;

    return 0;
}