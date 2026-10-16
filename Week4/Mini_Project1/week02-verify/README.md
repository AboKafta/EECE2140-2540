Purpose: Reads voltage and resistance and gives current with Ohm's Law
Input Format: voltage and resistance (in V and ohms) seperated by a space
Output: Valid input gives: "Current: value A"
       Invalid input gives: "Invalid Input"
Build and run:
bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
.build/app

bash
bash test.sh
Prints "All acceptance tests passed' if every test is passes. GitHub runs this test on every push and pull request

Example:
$ echo "12 4" | ./build/app
Current: 3 A
$ echo "12 0" | ./build/app
Invalid input

Limitations:
-Extra text is ignored
-Negative voltages are checked
-6 sig figs only

Debugging Reflection:
-A lot of the time, the file wasn't saved so compiling didn't work and bash didn't recognize a file. 
-One test failed cause I had 3A instead of 3 A
