#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, eps, Sn, a;
    int i;

    do {
        cout << "Enter precision eps = ";
        cin >> eps;
    } while (eps <= 0);

    cout << "Enter x = ";
    cin >> x;

    i = 1;
    a = x / 2.0;
    Sn = a;

    do {
        a *= (i + 1) * x / pow(2.0, 2 * i + 1);
        Sn += a;
        i++;
    } while (abs(a) >= eps);

    cout << "\nSum of " << i << " terms: Sn = " << Sn;
    cout << "\n\nEnd of program.\n";
    return 0;
}