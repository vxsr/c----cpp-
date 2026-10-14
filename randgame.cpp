#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x;
    srand(time(NULL));

    int num = (rand() % 100) + 1;
    cout << "Enter a number: ";
    while(x != num){
          cin >> x;
        if(x > num) {
            cout << "Less\n";
        }
        else if (x < num) {
            cout << "Greater\n";
        }
    }
    cout << "U won!\n";
    return 0;
}