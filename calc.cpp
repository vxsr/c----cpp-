#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

template <typename T>
T getNumber(const string& prompt = "") {
    T number;
    string line;
    while (true) {
        if (!prompt.empty()) {
            cout << prompt;
        }
        
        if (!getline(cin, line)) {
            break;
        }

        stringstream ss(line);
        // Проверяем, что число считалось и в строке нет лишних символов
        if (ss >> number && (ss >> ws).eof()) {
            return number; // Возвращаем полученное число
        }
        
        cout << "Try again: ";
    }
    return T();
}

int main() {
    int i;
    int operation;
    double a;
    long n;
    bool prime = n >1;
    long 
    double b;
    cout << "=======Select operation=======\n1. Sum\n2. Substract\n3. Product\n4. Quotient\n5. Prime or not\n6. Powers\n==============================\nOPERATION: ";
    operation = getNumber<int>("OPERATION: ");
    switch (operation) {
        case 1: 
            a = getNumber<double>("Enter a: ");
            b = getNumber<double>("Enter b: ");

            cout << a << " + " << b << " = "  << a + b << '\n';
            break;
        case 2:
            a = getNumber<double>("Enter a: ");
            b = getNumber<double>("Enter b: ");
            cout <<  a << " - " << b << " = "  << a - b << '\n';
            break;
        case 3:
            a = getNumber<double>("Enter a: ");
            b = getNumber<double>("Enter b: ");
            cout <<  a << " * " << b << " = "  << a * b << '\n';
            break;
        case 4:
            a = getNumber<double>("Enter a: ");
            b = getNumber<double>("Enter b: ");
            cout <<  a << " / " << b << " = "  << a / b << '\n';
            break;
        case 5:
            i = getNumber<int>("Enter i: ");
            for (long i = 2; i * i <= n; i++) {
                if (n % i == 0) 
            prime = false;
            }
            cout << (prime ? "prime" : "not prime") << endl;
            break;
        case 6:
            a = getNumber<double>("Enter a: ");
            b = getNumber<double>("Enter to which power \'a\' should be raised: ");
            cout << "a ^ b = " << pow(a,b) << '\n';
            break;
        default: 
            cout << "Enter operation which list contains.\n";
            break;
    }
    return 0;
}