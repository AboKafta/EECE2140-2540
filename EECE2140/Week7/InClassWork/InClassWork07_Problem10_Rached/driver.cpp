//Georgy Rached, EECE2140, October 28 2026
//This program tests the runstats module and returns the number of checks that failed
//Assisted with Claude Opus 5.5

#include <iostream>
#include <cmath>
#include <string>
#include "runstats.h"
using namespace std;

const double TOLERANCE = 0.000001;
int failures = 0;

bool isClose(double actual, double expected);
void check(bool passed, const string &name);

//Returns true if actual is within TOLERANCE of expected
bool isClose(double actual, double expected)
{
    return fabs(actual - expected) < TOLERANCE;
}

//Prints the name of a check that did not pass and adds 1 to failures
void check(bool passed, const string &name)
{
    if (!passed)
    {
        cout << "FAILED: " << name << endl;
        failures++;
    }
}

int main()
{
    runstats::reset();
    check(runstats::count() == 0, "count is 0 after reset");
    check(isClose(runstats::mean(), 0), "mean is 0 when empty");

    check(runstats::add(21.5), "21.5 is accepted");
    check(!runstats::add(-80), "-80 is refused");
    check(!runstats::add(200), "200 is refused");
    runstats::add(22);
    runstats::add(23.5);
    runstats::add(19);

    check(runstats::count() == 4, "count is 4");
    check(isClose(runstats::mean(), 21.5), "mean is 21.5");
    check(isClose(runstats::minimum(), 19), "min is 19");
    check(isClose(runstats::maximum(), 23.5), "max is 23.5");

    runstats::reset();
    check(runstats::add(-50), "-50 is accepted");
    check(runstats::add(150), "150 is accepted");
    check(runstats::count() == 2, "count is 2 after reset");
    check(isClose(runstats::minimum(), -50), "min is -50 after reset");

    if (failures == 0)
        cout << "all checks passed" << endl;
    else
        cout << failures << " checks failed" << endl;

    return failures;
}
