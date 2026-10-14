#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

const double EPS = 1e-9;

// Безопасно читает одну строку из cin.
// Если cin оказался в состоянии ошибки, но поток не завершён (не eof) —
// это восстановимая ситуация: сбрасываем флаги и читаем как обычно.
// Возвращает false только если поток реально закончился (eof) либо повреждён (bad).
bool safeGetline(string &line)
{
    if (cin.fail() && !cin.eof())
        cin.clear();

    return static_cast<bool>(getline(cin, line));
}

double readDouble(const string &prompt)
{
    double value;
    string line;
    while (true)
    {
        cout << prompt;
        if (!safeGetline(line))
        {
            cout << "\nВвод неожиданно завершился.\n";
            exit(1);
        }

        stringstream ss(line);
        if ((ss >> value) && (ss >> ws).eof())
            return value;

        cout << "Not a number.\nTry again.\n";
    }
}

void checkab(double &a, double &b)
{
    do
    {
        cout << "a must be less than b.\n";
        a = readDouble("Enter a = ");
        b = readDouble("Enter b = ");
    } while (a > b || abs(a - b) < EPS);
}

int checkn()
{
    long long n;
    string line;
    while (true)
    {
        cout << "Enter natural \"n\".\n";
        cout << "Enter n = ";

        if (!safeGetline(line))
        {
            cout << "\nВвод неожиданно завершился.\n";
            exit(1);
        }

        stringstream ss(line);
        if ((ss >> n) && (ss >> ws).eof() && n > 0)
            return (int)n;

        cout << "Not a natural number.\nTry again.\n";
    }
}

int main()
{
    double a, b, h, x, y, min_x, min_y, max_x, max_y;
    int n;

    checkab(a, b);
    n = checkn();

    h = (b - a) / n;

    x = a;
    y = log(M_PI + abs(sin(x * x))) + pow(x, 4);

    cout << "\nx =\t y =\n";
    cout << fixed << setprecision(5);
    cout << setw(10) << x << '\t' << setw(10) << y << endl;

    min_y = max_y = y;
    min_x = max_x = x;

    for (int i = 1; i <= n; i++)
    {
        x = a + h * i;
        y = log(M_PI + abs(sin(x * x))) + pow(x, 4);
        cout << setw(10) << x << '\t' << setw(10) << y << endl;

        if (y < min_y)      { min_y = y; min_x = x; }
        else if (y > max_y) { max_y = y; max_x = x; }
    }

    cout << "\nThe largest value of the function is " << max_y << " at x = " << max_x << endl;
    cout << "The smallest value of the function is " << min_y << " at x = " << min_x << endl;

    cout << "\n\nEnd of program.\n";
    return 0;
}