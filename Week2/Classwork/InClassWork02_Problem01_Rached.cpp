//By Georgy Rached, September 18, 2026, EECE2140
//Program does basic arithmetic
// a/b truncates down because it is integer type but c is a double so it gives exact

#include <iostream>
using namespace std;

int main() {
    int a = 11;
    int b = 4;
    double c = 2.0;

    cout << "a/b: " << a/b << endl;
    cout << "a%b: " << a%b << endl;
    cout << "a/c: " << a/c << endl;

    return 0;
}