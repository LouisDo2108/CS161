#include <iostream>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 3
// Output: 170

// Test case 2
// Input: 3 3
// Output: 2460

// Test case 3
// Input: 4 3
// Output: 17476


int main() {

    cout << "This program will return the sum of the sequence: ";
    cout << "S(n) = x + x^3 + x^5 + ... + x^(2n + 1)" <<endl;
    cout << "Please input a real number x and a positive integer n respectively." <<endl;

    double x, temp = 1, sum;
    int n;

    do {
        cin >> x;
        cin >> n;
    } while(n < 0);

    for(int i = 1; i <= (2*n +1); ++i) {
        temp *= x;
        if(i % 2 != 0)
            sum += temp;
    }

    cout << sum;
    return 0;
}
