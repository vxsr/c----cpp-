#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long n;
    cout << "Enter n: ";
    cin >> n;

    long p = 1;
    for(int i = 1; i > 0 && i <= n; i += 1) {
        p *= i;
    }
    cout << p;
}