#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double eps = 1e-9;

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
        if (!getline(cin, line))
        {
            cout << "\nTry again.\n";
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
    } while (a > b || abs(a - b) < eps);
}

int checkn()
{
    long long n;
    string line;
    while (true)
    {
        cout << "Enter natural \"n\".\n";
        cout << "Enter n = ";

        if (!getline(cin, line))
        {
            cout << "\nTry again.\n";
            exit(1);
        }

        stringstream ss(line);
        if ((ss >> n) && (ss >> ws).eof() && n > 0)
            return (int)n;

        cout << "Not a natural number.\nTry again.\n";
    }
}


int main() {
    int n; 
    double a, b, h, y, x, min_y, min_x, max_y, max_x;
    do
    {

        cout << "b must be greater than a. \n";
        cout << "Enter a = ";
        cin >> a;



        cout << "Enter b = ";
        cin >> b;


    
    }   while (a > b || abs(a - b) < eps);

    do
    {
        cout << "Enter natural \'n\'. \n";
        cout << "Enter n = ";
        cin >> n;

    }   while (n <= 0);

    h = (b - a) / n;

    x = a;
    y = log((M_PI) + abs(sin(x*x))) + pow(x, 4);

    cout << "\nx =\t y =\n";

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