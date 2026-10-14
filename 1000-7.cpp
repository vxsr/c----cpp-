#include <iostream>

int main() {
    int a = 1000, b = 7;
    for (int i = 0; a > 0; i++) {

        std::cout << a << '\n';
        a = a - b;
    }

}