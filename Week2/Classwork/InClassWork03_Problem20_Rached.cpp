// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code simulates an elevator    

#include <iostream>
using namespace std;

int main() {
    int currentFloor = 1;
    int totalFloorsTraveled = 0;
    int destination = -1;

    while (destination != 0) {
        cout << "Destination (0 to stop): ";
        cin >> destination;

        if (destination >= 1 && destination <= 10) {
            if (destination > currentFloor) {
                cout << "UP " << destination - currentFloor << " floors" << endl;
            } else if (destination < currentFloor) {
                cout << "DOWN " << currentFloor - destination << " floors" << endl;
            } else {
                cout << "STAY" << endl;
            }
            totalFloorsTraveled += abs(destination - currentFloor);
            currentFloor = destination;
        } else if (destination != 0) {
            cout << "Invalid floor" << endl;
        }
    }

    cout << "Total floors traveled: " << totalFloorsTraveled << endl;

    return 0;   
}
