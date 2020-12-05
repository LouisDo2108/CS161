#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 -7 5
// Output: x1 = 1.00, x2 = 2.50

// Test case 2
// Input: 1 1 -2
// Output: x1 = -2.00, x2 = 1.00

// Test case 3
// Input: 2 1 0
// Output: x1 = -0.50, x2 = 0.00


int main() {
    double a, b, c;
    cout << "This program will return the solution for the equation: ax^2 + bx + c = 0" <<endl;
    cout << "Please input a, b, c respectively." <<endl;
    cout << "Input: ";
    cin >> a >> b >> c;
    if(a == 0 && b == 0) {
        if(c == 0)
            cout << "All real numbers." <<endl;
        else
            cout << "No solution." <<endl;
    } else if(a == 0) {
        cout << "x = " << setprecision(2) << fixed << -b/a << endl;
    } else {
        double delta = b*b - 4*a*c;
        if(delta < 0)
            cout <<"No solution" <<endl;
        else if(delta == 0)
            cout <<"Double root x = " << setprecision(2) << fixed << -b/2*a <<endl;
        else {
            cout << "x1 = " << setprecision(2) << fixed << (-b - sqrt(delta)) / (2*a);
            cout << ", x2 = " << setprecision(2) << fixed << (-b + sqrt(delta)) / (2*a);
        }
    }
    return 0;
}
