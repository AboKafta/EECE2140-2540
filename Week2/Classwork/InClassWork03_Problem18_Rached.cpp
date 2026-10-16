// Georgy Rached and Brodie Newhouse
// Computing Fundamentals
// September 25, 2026
// This code asks for a code until the correct one is entered and locks after 3 attempts
#include <iostream>
using namespace std;

int main() {
    int code = 4321;
    int guess = 0;

    int attempts = 0;
    while (guess != code && attempts < 3) {
        cout << "Enter code: ";
        cin >> guess;
        if (guess != code) {
            cout << "Try again" << endl;
        }
        attempts++;
    }

    if (guess == code) {
        cout << "Access Granted" << endl;
    }
    else {
        cout << "Access Locked" << endl;
    }

    return 0;   
}