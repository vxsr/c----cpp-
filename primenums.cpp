/*#include <iostream> 
using namespace std;

int main() {
    int n;
    bool prime;
    cout << "Enter to which number primes will be shown: ";
    cin >> n;
    for(int i = 2; i <= n; i++) {
        for(int l = 2; l*l <= i; l++) {
            if (l % i != 0) {
            prime = true;
            cout << l;
        }
        }   
    }
}
    */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter to which number primes will be shown: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int l = 2; l * l <= i; l++) {
            if (i % l == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << i << '\n';
        }
    }
    cout << '\n';
    return 0;
}