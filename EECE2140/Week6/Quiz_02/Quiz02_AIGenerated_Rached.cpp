#include <iostream>
using namespace std;

int main()
{
    // ----- Setup -----
    // CONST array size, declared inside main (not global)
    const int LENGTH_ARRAY = 6;

    // Temperature readings. To test an edge case, comment out this line
    // and uncomment one of the test lines below.
    int reading[LENGTH_ARRAY] = {42, 17, 93, 8, 61, 25};      // Normal
    // int reading[LENGTH_ARRAY] = {1, 2, 3, 4, 5, 6};        // Sorted already
    // int reading[LENGTH_ARRAY] = {93, 61, 42, 25, 17, 8};   // Reverse order
    // int reading[LENGTH_ARRAY] = {-5, 12, -20, 3, 0, 7};    // Negatives
    // int reading[LENGTH_ARRAY] = {25, 25, 25, 25, 25, 25};  // All the same

    int minReading = 0;
    int maxReading = 0;
    double medianReading = 0.0;

    // ----- Print the array before sorting -----
    cout << "Before sorting: ";
    for (int index = 0; index < LENGTH_ARRAY; index++)
    {
        cout << reading[index] << " ";
    }
    cout << endl << endl;

    // ----- Bubble sort -----
    // Outer loop: each pass pushes the largest remaining value to the end.
    // A list of 6 values needs at most 5 passes (LENGTH_ARRAY - 1).
    for (int pass = 0; pass < LENGTH_ARRAY - 1; pass++)
    {
        // Inner loop: compare neighbouring pairs.
        // "- pass" skips the end of the array, because each finished pass
        // has already placed the largest values there in their final spots.
        for (int index = 0; index < LENGTH_ARRAY - 1 - pass; index++)
        {
            // If the left value is bigger than the right value, swap them
            if (reading[index] > reading[index + 1])
            {
                // Temporary variable holds the left value so it isn't lost
                int temp = reading[index];
                reading[index] = reading[index + 1];
                reading[index + 1] = temp;
            }
        }

        // Print the array after this pass to show progress
        cout << "After pass " << pass + 1 << ": ";
        for (int index = 0; index < LENGTH_ARRAY; index++)
        {
            cout << reading[index] << " ";
        }
        cout << endl;
    }

    // ----- Print the array after sorting -----
    cout << endl << "After sorting: ";
    for (int index = 0; index < LENGTH_ARRAY; index++)
    {
        cout << reading[index] << " ";
    }
    cout << endl << endl;

    // ----- Min, max, and median -----
    // After sorting, the smallest value is first and the largest is last
    minReading = reading[0];
    maxReading = reading[LENGTH_ARRAY - 1];

    // With an even count (6), the median is the average of the two middle
    // values: indexes 2 and 3. Dividing by 2.0 (not 2) forces decimal
    // division, so 67 / 2.0 gives 33.5 instead of 33.
    medianReading = (reading[2] + reading[3]) / 2.0;

    cout << "Min: " << minReading << endl;
    cout << "Max: " << maxReading << endl;
    cout << "Median: " << medianReading << endl;

    return 0;
}