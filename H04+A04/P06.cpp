#include <iostream>
#include <iomanip>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 5
// Output: 0.83

// Test case 2
// Input: 4
// Output: 0.80

// Test case 3
// Input: 3
// Output: 0.75


int main() {

    cout << "This program will return the sum of the sequence: ";
    cout << "S(n) = 1/(1*2) + 1/(2*3) + ... + 1/(n*(n+1))"<<endl;
    cout << "Please input a positive integer n." << endl;

    double sum;
    int n;

    do{
        cin >> n;
    }while(n < 0);

    for(int i = 1; i <= n; ++i) {
        sum += 1.0 / (i * (i + 1));
    }

    cout << setprecision(2) << fixed << sum;
    return 0;
}
