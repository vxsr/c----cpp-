#include <iostream>
#include <random>
using namespace std;

int main() {
    int N, lower, higher;
    do {cout << "Enter the number of elements: ";
    cin >> N;} while(N <= 0);
    cout << "Enter bounds for elements (e.g. (1, 100)) \n";
    cout << "Lower bound: ";
    cin >> lower;
    cout << "Higher bound: ";
    cin >> higher;
    mt19937 gen(random_device{}());
    uniform_int_distribution<int> dist(lower, higher);
    int arr[N];
    int i, imin, imax;
    double sum = 0.0, divider;

    for (i = 0; i < N; i++) {
        arr[i] = dist(gen);
    }

    for (i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    imin = 0;
    imax = 0;
    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < N; i++) {
        if (arr[i] <= min) {
            imin = i;
            min = arr[i];        
        }
        else if (arr[i] >= max) {
            imax = i;
            max = arr[i];
        }
    }

    int start = (imin < imax) ? imin : imax;
    int end = (imin < imax) ? imax : imin;
    cout << "min = " << imin << '\n';
    cout << "max = " << imax << '\n';
    if(end - start > 1) {
        for (i = start; i <= end; i++) {
            sum += arr[i];
            divider = abs(start - end);

        }
    cout << "min = " << arr[imin] << '\n';
    cout << "max = " << arr[imax] << '\n';
    cout << "sum = " << sum << '\n';
    cout << "divider = " << divider << '\n';
    cout << "average = " << sum / divider << '\n';
    } else {
        cout << "Minimum and maximum are adjacent, so average arithmetic doesn`t exist.\n";
    }
    return 0;
}