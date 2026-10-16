//By Georgy Rached, September 18, 2026, EECE2140
//Program verifes age and test code
#include <iostream>
using namespace std;

int main() {
    int age = 0;
    int test = 0;

    cout << "What is your age and test score, press enter after each value" << endl;
    cin >> age;
    cin >> test;

    bool verify = (age >= 18) && (test >= 70);
    cout << boolalpha;
    cout << "Verify: " << verify << endl;
}