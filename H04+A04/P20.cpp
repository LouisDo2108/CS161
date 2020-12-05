#include <iostream>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 6
// Output: 1 2 3 6

// Test case 2
// Input: 4
// Output: 1 2 4

// Test case 3
// Input: 10
// Output: 1 2 5 10


int main() {
    cout << "This program will return the list of common divisors of the given positive integer." << endl;
    cout << "Please input the positive integer (n > 0): " << endl;
    int n;
    do {
        cin >> n;
    } while(n < 0);
    if(n == 1)
        cout << 1;
    else {
        cout << 1 << " ";
        for(int i = 2; i <= (n/2); i++) {
            if(n % i == 0)
                cout << i << " ";
        }
        cout << n;
    }
    return 0;
}
