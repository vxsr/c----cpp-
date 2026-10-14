#include <iostream>
using namespace std;

int main() {

    int rows;
    int columns;
    char symbol;
    
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter symbol to use: ";
    cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for (int j =1; j <= columns; j++){
            cout << symbol << ' ';
        }
    cout << '\n';
    }

}