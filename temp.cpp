#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double t;
    cout << "Enter temperature: ";
    cin >> t;

    //cout << (t>0 && t<30 ? "Your weather is goated ngl" : "Bad as shi");
    cout << (t<0 || t>30 ? "Your weather is bad ngl" : "Good as shi");

    return 0;
}