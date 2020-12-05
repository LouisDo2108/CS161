#include <iostream>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 6
// Output: YES

// Test case 2
// Input: 33550336
// Output: YES

// Test case 3
// Input: 9
// Output: NO


int main() {

    cout << "This program will return whether the integer you inputted is a perfect number." << endl;
    cout << "Please input a positive integer." << endl;

    int n, temp = 0;

    do {
        cin >> n;
    } while(n < 0);

    for(int i = 1; i <= (n/2); ++i) {
        if(n % i == 0)
            temp += i;
    }

    if(temp == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
