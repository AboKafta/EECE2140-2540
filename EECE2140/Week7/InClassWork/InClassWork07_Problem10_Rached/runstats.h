//Georgy Rached, EECE2140, October 28 2026
//This header declares the runstats module that keeps running statistics of temperature readings
//Assisted with Claude Opus 5.5

#ifndef RUNSTATS_H
#define RUNSTATS_H

namespace runstats
{
    //Clears all readings so the statistics start over
    void reset();

    //Adds a reading if it is from -50 to 150 C, returns false if it is refused
    bool add(double reading);

    //Returns how many readings were accepted
    int count();

    //Returns the mean of the accepted readings, or 0 when there are none
    double mean();

    //Returns the smallest accepted reading, or 0 when there are none
    double minimum();

    //Returns the largest accepted reading, or 0 when there are none
    double maximum();
}

#endif
