#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 5
// Output: 2.74

// Test case 2
// Input: 3
// Output: 2.18

// Test case 3
// Input: 7
// Output: 3.16


int main() {

    cout << "This program will return the result of the sequence: " <<endl;
    cout << "S(x,n) = CanBac2(n + CanBac2(n-1 + бн + CanBac2(2 + CanBac2(1))))" <<endl;
    cout << "Please input a positive integer n." << endl;

    int n;
    double result = 0;

    do {
        cin >> n;
    } while(n < 0);

    for(int i = 1; i <= n; ++i) {
        result = sqrt(result + i);
    }

    cout << setprecision(2) << fixed << result;
    return 0;
}
