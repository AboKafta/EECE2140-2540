//Georgy and Brodie 09/25/2026 EECE2140
//This program reads a target and divisor and finds the first multiple above the target
#include <iostream>
using namespace std;

int main() {
    
    int divisor = 0;
    int target = 0;
    int total = 0;
    
    cout << "Enter divisor: ";
    cin >> divisor;
    cout << "Enter target: ";
    cin >> target;

    while (target <= 0 || divisor <= 0) {
        cout << "Re-enter a positive target/divisor: " << endl;
        cout << "Divisor: ";
        cin >> divisor;
        cout << "Target: ";
        cin >> target;
    }

    total = target;
    while (total % divisor != 0) {
        ++total;
    }

    cout << "First multiple above target: " << total << endl;
    return 0;

}
