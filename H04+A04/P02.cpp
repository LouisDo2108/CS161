#include <iostream>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 0
// Output: 0

// Test case 2
// Input: 5
// Output: 55

// Test case 3
// Input: 4
// Output: 30


int main() {
    cout << "This program will return the sum of the squares of n consecutive integers." << endl;
    cout << "Please input a positive integer (n >= 0): " << endl;
    int n;
    do {
        cin >> n;
    } while(!(n >= 0));
    if(n == 0)
        cout << 0;
    else
        cout << (n*(n+1)*(2*n + 1))/6;
    return 0;
}
