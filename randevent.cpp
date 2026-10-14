#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: cout << "it is warm";
            break;
        case 2: cout << "it is raining";
            break;
        case 3: cout << "it is sunny";
            break;
        case 4: cout << "it is foggy";
            break;
        case 5: cout << "it is frosty";
            break;
    }

    return 0;
}