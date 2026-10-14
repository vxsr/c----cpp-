#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long n;
    cout << "Enter number to check if it is even or odd: ";
    cin >> n;
    //n % 2 == 0 ? cout << "Even" : cout << "Odd";
    cout << (n % 2 == 0 ? "Even" : "Odd");

    return 0;
}