#include <iostream>
#include <stdio.h>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 9, 2
// Output: 9 / 2 = 4.50

// Test case 2
// Input: 20, 2
// Output: 20 / 2 = 10.00

// Test case 3
// Input: 3, 4
// Output: 3 / 4 = 0.75

/* Input: 2 integer values a, b
    Output: a / b = c (c: 2 decimal places)
    if(b == 0): re-input a, b
    Up to 3 test cases. */

int main()
{
    cout << "This program will return the quotient of 2 integers." << endl;
    cout << "Please input 2 integers." << endl;
    for (int i = 1; i <= 3; i++) {
        double x, y;
        cout << "Test case " << i << endl;
        cout << "Input: ";
        while (1) {
            cin >> x >> y;
            if (y == 0)
                continue;
            else
                break;
        }
        printf("Output: %.0f / %.0f = %.2f\n", x, y, x / y);
    }
    return 0;
};
