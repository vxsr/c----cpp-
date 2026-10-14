#include <iostream>
#include <cmath>
using namespace std;

long factorial(int n) {
    long product = 1;
    for (int f = 1; f <= n; f += 1) {
        product *= f;
    }
    return product;
}

int main() {
    double Sn, a, eps, x;
    int i;
    cout << "Enter x = ";
    cin >> x;
    do {
        cout << "Enter precision: ";
        cin >> eps;
    } while(eps <= 0);

    i = 0;
    Sn = 0;

    do {
        i++;
        a = factorial(i) * pow(x,i) / pow(2,pow(i,2));
        Sn += a;
    } while(abs(a) >= eps);
    cout << "Sum of " << i << " terms of the series\n\ti!x^i/2^(i^2) = " << Sn;
    cout << "\n\n End of Program. \n";
    return 0;
}