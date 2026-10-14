#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    int n; 
    double a, b, h, y, x, min_y, min_x, max_y, max_x;
    double eps = 1e-9;
    do
    {
        do
        {
            cout << "Enter a = ";
            if (!(cin >> a))
            {
                clearInput();
                continue;
            }
        } while (abs(a * a - 3.0) < eps);

        do
        {
            cout << "Enter b = ";
            if (!(cin >> b))
            {
                clearInput();
                continue;
            }
        } while (abs(b * b - 3.0) < eps);

    
    }   while (a > b || abs(a - b) < eps);

    do
    {
        cout << "Enter n = ";
        if (!(cin >> n))
        {
            clearInput();
            continue;
        }

    }   while (n <= 0);

    h = (b - a) / n;

    x = a;
    y = (log(M_PI) + sin(x*x)) + pow(x, 4);

    cout << "\nx =\t y =\n";

    cout.width(10);
    cout.precision(5);
    cout << x << '\t' << y << endl;

    max_y = min_y = y;
    max_x = min_x = x;

    for (int i = 1; i <=n; i++)
    {
        x = a + h * i;
        y = (log(M_PI) + sin(x*x)) + pow(x, 4);
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