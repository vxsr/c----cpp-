#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int n; // Оголошуємо ціле n
    double a, b, h, y, x, min_y, min_x, max_y, max_x; // Оголошуємо a, b, h, y, x, min_y, min_x, max_y, max_x з double precision
    double eps = 1e-9; // Вводимо eps для перевірки наскільки а менше за b
    do {

        cout << "a must be less than b. \n";    
        cout << "Enter a = ";
        cin >> a;

        cout << "Enter b = ";
        cin >> b;
    
    }   while (a > b || abs(a - b) < eps); // Цикл, який перевіряє чи правильнно введені параметри a i b


    do {    
        cout << "\nEnter natural \"n\". \n";
        cout << "Enter n = ";
        cin >> n;
    }  while(n <= 0);
   
    h = (b - a) / n;

    x = a;
    y = log((M_PI) + abs(sin(x*x))) + pow(x, 4);

    cout << "\n\tx =\t y =\n";

    cout.width(10);
    cout.precision(5);
    cout << x << '\t' << y << endl;

    max_y = min_y = y;
    max_x = min_x = x;

    for (int i = 1; i <=n; i++)
    {
        x = a + h * i;
        y = log((M_PI) + abs(sin(x*x))) + pow(x, 4);
        cout.width(10);
        cout.precision(5);
        cout << x << '\t' << y << endl;

        if (y < min_y)
        {
            min_y = y;    min_x = x;
        }
        else if (y > max_y)
        {
            max_y = y;    max_x = x;
        }
    }
    cout << "\nThe largest value of the function is " << max_y << " at x = " << max_x << endl;
    cout << "The smallest value of the function is " << min_y << " at x = " << min_x << endl;

    cout << "\n\nEnd of program.\n";

    return 0;
}