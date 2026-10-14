#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;
    cout << "Enter int: ";
    cin >> n;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
        prime = false; }
    }
    cout << (prime ? "Prime" : "Not prime") << endl;
}