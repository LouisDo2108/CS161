#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 7
// Output: YES

// Test case 2
// Input: 4
// Output: NO

// Test case 3
// Input: 13
// Output: YES


int main() {

    cout << "This program will return whether the integer you input is a prime number." << endl;
    cout << "Please input the integer you want to evaluate." <<endl;

    int n;

    do {
        cin >> n;
    } while(n < 0);

    if(n == 1 || n == 2)
        cout << "Yes";
    else if(n % 2 == 0)
        cout << "NO";
    else {
        for(int i = 3; i <= sqrt(n); i += 2) {
            if(n % i == 0) {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }

    return 0;
}
