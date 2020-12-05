#include <iostream>
#include <iomanip>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 3
// Output: 4.63

// Test case 2
// Input: 3 3
// Output: 10.96

// Test case 3
// Input: 4 3
// Output: 27.45


int main() {

    cout << "This program will return the sum of the sequence: " <<endl;
    cout << "S(x,n) =  1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!" << endl;
    cout << "Please input a real number x and a positive integer n respectively." << endl;

    double x, temp = 1, sum = 1;
    int n, factorial = 1;

    do {
        cin >> x;
        cin >> n;
    } while(n < 0);

    for(int i = 1; i <= (2*n + 1); ++i) {
        factorial *= i;
        temp *= x;
        if(i % 2 != 0)
            sum += (temp / factorial);
            cout << "Sum = " << sum <<endl;
    }

    cout << setprecision(2) << fixed << sum;
    return 0;
}
