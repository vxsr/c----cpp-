#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    long o;
    long n;
    cout << "Enter number: ";

    bool prime = n > 1;
        
    while(cin >> n && n < 1) {
        cin.clear();
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter some natural number: ";
    }

    for(long i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            prime = false;
        }
        else {
            o = (n % i);
            cout << o << endl;
        }
        
    }
    return 0;
}