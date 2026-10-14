#include <iostream>
#include <vector>

using namespace std;

// Функция для вычисления определителя матрицы 3x3 по формуле
double calculateDet3x3(const vector<vector<double>>& m) {
    return m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
           m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
           m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
}

int main() {
    // Создаем матрицу 3x3
    vector<vector<double>> matrix(3, vector<double>(3));

    cout << "Введите элементы матрицы 3x3 (по 3 числа в строке, через пробел):\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Считаем и выводим результат
    double det = calculateDet3x3(matrix);
    cout << "Определитель матрицы: " << det << endl;

    return 0;
}