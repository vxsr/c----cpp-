#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    long n;
    cout << ("Enter n: ");

    bool prime = n > 1;

    while(cin >> n && n < 1) {
        cin.clear();
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter smth natural number: ";
    }
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            prime = false;
    }
    cout << (prime ? "prime" : "not prime") << endl;
    

    return 0;
}