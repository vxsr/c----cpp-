#include <iostream>
 
int doubleNumber(int x) {
    return x * 2;
}
int main() {
    int a;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << doubleNumber(a);
}