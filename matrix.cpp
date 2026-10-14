#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Универсальная функция вычисления определителя методом Гаусса (работает для NxN)
double calculateDeterminant(vector<vector<double>> a) {
    int n = a.size();
    double det = 1.0;
    const double EPS = 1E-9; // погрешность для вещественных чисел

    for (int i = 0; i < n; ++i) {
        // Ищем ненулевой ведущий элемент в текущем столбце
        int k = i;
        for (int j = i + 1; j < n; ++j) {
            if (abs(a[j][i]) > abs(a[k][i])) {
                k = j;
            }
        }
        
        // Если ведущий элемент почти 0, то определитель равен 0
        if (abs(a[k][i]) < EPS) {
            return 0.0; 
        }

        // Если строка не на своем месте, меняем местами и меняем знак детерминанта
        if (k != i) {
            swap(a[i], a[k]);
            det = -det;
        }

        det *= a[i][i];

        // Обнуляем элементы ниже главной диагонали через цикл
        for (int j = i + 1; j < n; ++j) {
            double factor = a[j][i] / a[i][i];
            for (int c = i; c < n; ++c) {
                a[j][c] -= factor * a[i][c];
            }
        }
    }

    return det;
}

int main() {
    int choice;
    cout << "Выберите размер матрицы:\n";
    cout << "3 - Матрица 3x3\n";
    cout << "4 - Матрица 4x4\n";
    cout << "5 - Матрица 5x5\n";
    cout << "Ваш выбор: ";
    cin >> choice;

    int n = 0;

    // Конструкция switch для выбора размера
    switch (choice) {
        case 3:
            n = 3;
            break;
        case 4:
            n = 4;
            break;
        case 5:
            n = 5;
            break;
        default:
            cout << "Неверный выбор! Перезапустите программу." << endl;
            return 0; // Завершаем работу программы досрочно
    }

    // Создаем матрицу нужного размера NxN, заполненную нулями
    vector<vector<double>> matrix(n, vector<double>(n));

    cout << "\nВведите элементы матрицы " << n << "x" << n << " (" << n * n << " чисел через пробел или Enter):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Считаем определитель универсальным методом
    double det = calculateDeterminant(matrix);
    
    // Выводим результат (используем округление для красоты, если там плавающая точка)
    cout << "\nОпределитель матрицы: " << det << endl;

    return 0;
}