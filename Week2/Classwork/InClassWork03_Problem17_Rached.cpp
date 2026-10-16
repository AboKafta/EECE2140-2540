//Georgy and Brodie 09/25/2026 EECE2140
//This program reads 5 temperatures and says if it is safe, hot or cold
#include <iostream>
using namespace std;

int main() {

    int temp1, temp2, temp3, temp4, temp5;
    int hot = 0;
    int cold = 0;
    int safe = 0;

    cout << "Reading 1: ";
    cin >> temp1;

    cout << "Reading 2: ";
    cin >> temp2;

    cout << "Reading 3: ";
    cin >> temp3;

    cout << "Reading 4: ";
    cin >> temp4;

    cout << "Reading 5: ";
    cin >> temp5;

    if (temp1 < 0)
    {
        cold++;
    }
    else
    {
        if (temp1 <= 35)
            safe++;
        else
            hot++;
    }

    if (temp2 < 0)
    {
        cold++;
    }
    else
    {
        if (temp2 <= 35)
            safe++;
        else
            hot++;
    }

    if (temp3 < 0)
    {
        cold++;
    }
    else
    {
        if (temp3 <= 35)
            safe++;
        else
            hot++;
    }

    if (temp4 < 0)
    {
        cold++;
    }
    else
    {
        if (temp4 <= 35)
            safe++;
        else
            hot++;
    }

    if (temp5 < 0)
    {
        cold++;
    }
    else
    {
        if (temp5 <= 35)
            safe++;
        else
            hot++;
    }

    cout << "Cold: " << cold << endl;
    cout << "Hot: " << hot << endl;
    cout << "Safe: " << safe << endl;

    return 0;
}
