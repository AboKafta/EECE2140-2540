//Georgy Rached, EECE2140, October 28 2026
//This program reads temperature readings until 999 and prints the running statistics
//Assisted with Claude Opus 5.5

#include <iostream>
#include "runstats.h"
using namespace std;

int main()
{
    double reading = 0;
    int rejected = 0;
    
    runstats::reset();

    cout << "Readings (999 to stop): ";
    while (cin >> reading && reading != 999)
    {
        if (!runstats::add(reading))
            rejected++;
    }

    if (!cin)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    cout << "accepted " << runstats::count() << ", rejected " << rejected << endl;
    cout << "mean " << runstats::mean() << ", min " << runstats::minimum();
    cout << ", max " << runstats::maximum() << endl;

    return 0;
}
