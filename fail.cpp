/* #include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int number;
    string line;
    cout << "Enter a number: ";

    while (true) {
        if (!getline(cin, line)) break;   // на случай Ctrl+D / EOF

        stringstream ss(line);
        if (ss >> number && ss.eof()) {
            break;   // число распознано, и после него ничего лишнего
        }

        cout << "Not a number.\n";
        cout << "Try again\n";
        cout << "Enter a number: ";
    }

    cout << "Yay";
    return 0;
} */


#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    double number;
    string line;
    cout << "Enter a number: ";

    while (true) {
        if (!getline(cin, line)) break;

        stringstream ss(line);
        if (ss >> number && (ss >> ws).eof()) {
            break;
        }

        cout << "Not a number.\n";
        cout << "Try again\n";
        cout << "Enter a number: ";
    }

    cout << "Yay";
    return 0;
}