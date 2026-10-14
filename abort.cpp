#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int randNum = (rand() % 2) + 1;

    switch(randNum){

        case 1: cout << "abort is bad \n";
            break;

        case 2: cout << "abort is good \n";
            break;
    }

    return 0;
}