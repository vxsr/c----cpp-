#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {

    int n = M_PI;
    std::cout << "Try to enter n ";
    while(std::cin >> n) {
        std::cout << n;
        break;
    }
    return 0;
}