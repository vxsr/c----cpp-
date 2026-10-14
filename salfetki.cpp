#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, n;
    string phrase;
    cout << "Enter phrase: ";
    getline(cin, phrase);
    cout << "Enter how many times it will be anounced: ";
    cin >> n;
    for(a = 1; a <= n; a++) {
        cout << phrase << '\n';
    }
}