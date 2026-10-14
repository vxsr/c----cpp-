#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double n;
    double a;
    double x;
    cout << "Enter base: ";
    cin >> a;

    cout << "Enter to which power it will get raised: ";
    cin >> n;

    x = pow(a, n);

    cout << x << '\n';
}