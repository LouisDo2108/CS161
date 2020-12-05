#include <iostream>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 1, 2
// Output: 1 * 2 = 2

// Test case 2
// Input: 2, 3
// Output: 2 * 3 = 6

// Test case 3
// Input: 3, 4
// Output: 3 * 4 = 12

/* Input: 2 integers x, y
   Output: x * y = z
   Up to 3 test cases. */

int main()
{
    cout << "This program will return the product of 2 integers." << endl;
    cout << "Please input 2 integers." << endl;
    for (int i = 1; i <= 3; i++) {
        int x, y;
        cout << "Test case " << i << endl;
        cout << "Input: ";
        cin >> x >> y;
        cout << "Output: " << x << " * " << y << " = " << x * y << endl;
    }
    return 0;
};
