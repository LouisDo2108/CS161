#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 -7 5
// Output: x1 = -1.00, x2 = 1.00, x3 = -1.58, x4 = 1.58

// Test case 2
// Input: 1 -3 2
// Output: x1 = -1.00, x2 = 1.00, x3 = -1.41, x4 = 1.41

// Test case 3
// Input: 1 2 -3
// Output: x1 = -1.00, x2 = 1.00


int main() {
    double a, b, c;
    cout << "This program will return the solution for the equation: ax^4 + bx^2 + c = 0" <<endl;
    cout << "Please input a, b, c respectively." <<endl;
    cout << "Input: ";
    cin >> a >> b >>c;
    if(a == 0 && b == 0) {
        if(c == 0)
            cout << "All real numbers." <<endl;
        else
            cout << "No solution." <<endl;
    } else if(a == 0) {
        double result = -(c/b);
        if(result < 0)
            cout << "No solution.";
        else {
            cout << "x1 = " << setprecision(2) << fixed << -sqrt(result);
            cout << ", x2 = " << setprecision(2) << fixed << sqrt(result);
        }
    } else {
        double delta = b*b - 4*a*c;
        if(delta < 0)
            cout <<"No solution." <<endl;
        else if(delta == 0) {
            double result = -b/(2*a);
            if(result < 0) {
                cout << "No solution.";
            } else {
                cout <<"x1 = x2 = " << setprecision(2) << fixed << -sqrt(result);
                cout <<", x3 = x4 = " << setprecision(2) << fixed << sqrt(result);
            }
        } else {
            double result1 = (-b - sqrt(delta)) / (2*a);
            double result2 = (-b + sqrt(delta)) / (2*a);
            if(result1 < 0 && result2 < 0)
                cout << "No solution.";
            else if(result1 < 0 && result2 > 0) {
                cout << "x1 = " << setprecision(2) << fixed << -sqrt(result2);
                cout << ", x2 = " << setprecision(2) << fixed << sqrt(result2);
            } else if(result1 > 0 && result2 < 0) {
                cout << "x1 = " << setprecision(2) << fixed << -sqrt(result1);
                cout << ", x2 = " << setprecision(2) << fixed << sqrt(result1);
            } else {
                cout << "x1 = " << setprecision(2) << fixed << -sqrt(result1);
                cout << ", x2 = " << setprecision(2) << fixed << sqrt(result1);
                cout << ", x3 = " << setprecision(2) << fixed << -sqrt(result2);
                cout << ", x4 = " << setprecision(2) << fixed << sqrt(result2);
            }
        }
    }
    return 0;
}
