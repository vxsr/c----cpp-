#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cout << "enter n: ";
    cin >> n;

    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i; // s = s + i
    }

    cout << "sum = " << s << endl;
    
}