#include <iostream>
#include <string>
using namespace std;

int main() {
    string l;
    int rows, columns;

    cout << "Enter text: ";
    if (!(cin >> l)) {
        cerr << "Could not read the text.\n";
        return 1;
    }

    cout << "Enter rows: ";
    if (!(cin >> rows)) {
        cerr << "Rows must be an integer.\n";
        return 1;
    }

    cout << "Enter columns: ";
    if (!(cin >> columns)) {
        cerr << "Columns must be an integer.\n";
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << l << " ";
        }
        cout << '\n';
    }
}