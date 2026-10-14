#include <iostream>
using namespace std;

const int N = 10; // Максимальний степінь[cite: 1, 16]

int main() {
    double a[N + 1] = {0}; // Коефіцієнти початкового многочлена[cite: 1, 12]
    double r[N + 2] = {0}; // Коефіцієнти результату
    double c, d;           // Коефіцієнти двочлена (c*x + d)
    int n;                 // Степінь многочлена[cite: 12]

    // 1. Введення та перевірка степеня n[cite: 4, 16]
    do {
        cout << "Enter degree of polynomial (0 < n <= " << N << "): ";
        cin >> n;
    } while (n < 1 || n > N);

    // 2. Введення коефіцієнтів двочлена (c*x + d)
    cout << "Enter binomial coefficients (c and d for c*x + d):\n";
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;

    // 3. Введення коефіцієнтів многочлена P_n(x)[cite: 16]
    cout << "Enter coefficients of polynomial P_n(x):\n";
    for (int i = 0; i <= n; i++) {
        cout << "a_" << i << " = ";
        cin >> a[i];
    }

    // 4. Обчислення коефіцієнтів добутку
    r[0] = a[0] * d;
    for (int k = 1; k <= n; k++) {
        r[k] = c * a[k - 1] + d * a[k];
    }
    r[n + 1] = a[n] * c;

    // 5. Виведення коефіцієнтів результуючого многочлена R_(n+1)(x)
    cout << "\nCoefficients of resulting polynomial R_(n+1)(x):\n";
    for (int i = 0; i <= n + 1; i++) {
        cout << "r_" << i << " = " << r[i] << endl;
    }

    return 0;
}