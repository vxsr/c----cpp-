#include <iostream>
#include <limits>
using namespace std;

int main() {

    double number;
    cout << "Enter a number: ";


    while(!(cin >> number)){
        
        cin.clear();
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Not a number. \n";
        cout << "Try again \n";
        cout << "Type a number: ";
        
    }
    cout << "Yay";
    return 0;
}