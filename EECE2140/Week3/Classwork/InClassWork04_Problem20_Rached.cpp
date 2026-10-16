//By Georgy Rached, October 2, 2026, EECE2140
//This program generates a triangle, pyramid or diamond according to user input 

#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int size = 0;

    do {
        cout << "1 = Triangle 2 = Pyramid 3 = Diamond 0 = Quit" << endl;
        cout << "Choice: ";
        cin >> choice;

        while (choice != 1 && choice != 2 && choice != 3 && choice != 0) {
            cout << "Invalid choice" << endl;
            cout << "1 = Triangle 2 = Pyramid 3 = Diamond 0 = Quit" << endl;
            cout << "Choice: ";
            cin >> choice;
        }

        switch (choice) {
            case 1:
                cout << "Size: ";
                cin >> size;

                for (int i = 1; i <= size; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;

            case 2:
                cout << "Size: ";
                cin >> size;

                for (int i = 1; i <= size; i++) {
                    for (int k = 0; k < (size - i); k++)
                        cout << " ";

                    for (int j = 0; j < (2 * i - 1); j++)
                        cout << "*";

                    cout << endl;
                }
                break;

            case 3:
                cout << "Size: ";
                cin >> size;

                for (int i = 1; i <= size; i++) {
                    for (int k = 0; k < (size - i); k++)
                        cout << " ";

                    for (int j = 0; j < (2 * i - 1); j++)
                        cout << "*";

                    cout << endl;
                }

                for (int i = 1; i < size; i++) {
                    for (int j = 0; j < i; j++)
                        cout << " ";

                    for (int k = 0; k < (2 * (size - i) - 1); k++)
                        cout << "*";

                    cout << endl;
                }
                break;
        }
    } 
    
    while (choice != 0);

    cout << "Goodbye" << endl;

    return 0;
}