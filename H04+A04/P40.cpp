#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 3
// Output: 3.21

// Test case 2
// Input: 3 3
// Output: 5.50

// Test case 3
// Input: 4 3
// Output: 8.26


int main() {

    cout << "This program will return the result of the sequence: " <<endl;
    cout << "S(x,n) = CanBac2(x^n + CanBac2(x^n-1 + бн + CanBac2(x^2 + CanBac2(x))))" <<endl;
    cout << "Please input a real number x and a positive integer n respectively." << endl;

    int n;
    double x, exp = 1, result = 0;

    do {
        cin >> x >> n;
    } while(n < 0);

    for(int i = 1; i <= n; ++i) {
        exp *= x;
        result = sqrt(exp + result);
    }

    cout << setprecision(2) << fixed << result;
    return 0;
}
