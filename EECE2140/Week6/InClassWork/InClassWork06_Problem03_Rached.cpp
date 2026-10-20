//Georgy Rached, October 10, 2026, EECE2140 Dr. Nafa Fatema
//This program clips the brightest pixels in an image

#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 4;
    const int COLS = 5;
    int img[ROWS][COLS] = {
        {120, 135, 142, 128, 119},
        {131, 255, 198, 140, 125},
        {127, 244, 251, 133, 122},
        {118, 129, 137, 126, 115}
    };
    int clipLevel = 0;
    int clipped = 0;
    bool done = false;

    cout << "Clip level: ";
    cin >> clipLevel;

    if (!cin)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    while (!done)
    {
        int* best = img[0];
        int r = 0;

        for (int i = 0; i < ROWS; i++)
        {
            for (int* q = img[i]; q < img[i] + COLS; q++)
            {
                if (*q > *best)
                {
                    best = q;
                    r = i;
                }
            }
        }

        if (*best <= clipLevel)
        {
            done = true;
        }
        else
        {
            int c = best - img[r];
            int& px = img[r][c];

            cout << "clip (" << r << "," << c << ") from " << px << endl;
            px = clipLevel;
            clipped++;
        }
    }

    cout << clipped << " pixels clipped" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << img[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}