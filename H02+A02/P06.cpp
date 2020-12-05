#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 30
// Output: 0.5

// Test case 2
// Input: 60
// Output: 0.87

// Test case 3
// Input: 90
// Output: 1.00

/* Input: angle in degrees
   Output: sine value of an angle in degrees
   degrees to radian: degrees / 180 * 3.14(pi)
   Up to 3 test cases. */

int main()
{
    cout << "This program will return the sine value of an angle in degrees." << endl;
    cout << "Please input the angle in degrees." << endl;
    for (int i = 1; i <= 3; i++) {
        double degrees;
        cout << "Test case: " << i << endl;
        cout << "Input: ";
        cin >> degrees;
        printf("Output: %.2f\n", sin(degrees / 180 * 3.14));
    }
    return 0;
};
