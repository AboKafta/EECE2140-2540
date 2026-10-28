//Georgy Rached, EECE2140, October 28 2026
//This file defines the runstats functions and keeps their state private with static
//Assisted with Claude Opus 5.5

#include "runstats.h"

namespace runstats
{
    static int n = 0;
    static double sum = 0;
    static double lo = 0;
    static double hi = 0;

    //Clears all readings so the statistics start over
    void reset()
    {
        n = 0;
        sum = 0;
        lo = 0;
        hi = 0;
    }

    //Adds a reading if it is from -50 to 150 C, returns false if it is refused
    bool add(double reading)
    {
        if (reading < -50 || reading > 150)
            return false;

        if (n == 0)
        {
            lo = reading;
            hi = reading;
        }
        else
        {
            if (reading < lo)
                lo = reading;
            if (reading > hi)
                hi = reading;
        }

        n++;
        sum += reading;
        return true;
    }

    //Returns how many readings were accepted
    int count()
    {
        return n;
    }

    //Returns the mean of the accepted readings, or 0 when there are none
    double mean()
    {
        if (n == 0)
            return 0;

        return sum / n;
    }

    //Returns the smallest accepted reading, or 0 when there are none
    double minimum()
    {
        return lo;
    }

    //Returns the largest accepted reading, or 0 when there are none
    double maximum()
    {
        return hi;
    }
}
