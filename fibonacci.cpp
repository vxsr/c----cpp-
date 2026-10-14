#include <iostream>

using namespace std;

int main() {
    int n;
    int f[n];
    f[0] = 1;
    f[1] = 1;
    cout << "Enter number of fibonacci sequence: ";
    cin >> n;
    f[n] = f[n - 1] + f[n - 2];
    
    cout << f[n] << '\n';
}

