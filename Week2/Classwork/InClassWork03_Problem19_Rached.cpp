//Georgy and Brodie 09/25/2026 EECE2140
//This program is a traffic director for pedestrians and cars
#include <iostream>
using namespace std;

int main() {
    int steps = 0;
    int pedestrian = 0;
    int cars = 0;

    cout << "Enter time steps: ";
    cin >> steps;

    for (int i = 0; i < steps; ++i) {
        cout << "Pedestrian request: ";
        cin >> pedestrian;

        cout << "Waiting cars: ";
        cin >> cars;

        if (pedestrian > 0) 
        {
            cout << "Step " << i + 1 << ": WALK" << endl;
        }

        else 
        {
            if (cars > 0) 
            {
                cout << "Step " << i + 1 << ": GREEN" << endl;
            } 
            else {
                cout << "Step " << i + 1 << ": RED" << endl;
            }
        }
    }

    return 0;
}
