#include <iostream>
using namespace std;

int main() {

    int n;
    do {
        cout << "Enter positive int: ";
        cin >> n;
    } while(n <= 0);

    cout << "Your int is: " << n << '\n';

    return 0;
}