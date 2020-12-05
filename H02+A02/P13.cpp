#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 3.00 4.00 5.00
// Output: 12.00 6.00

// Test case 2
// Input: 6 8 10
// Output: 24.00 24.00

// Test case 3
// Input: 2 3 4
// Output: 9.00 2.90

/* Input: x, y, z(Edges of a valid triangle)
   Output: Perimeter Area(2 decimal places)
   Up to 3 test cases. */

int main()
{
    cout << "This program will return the perimeter and the area of a valid triangle." << endl;
    cout << "Please input 3 edges of a valid triangle." << endl;

    for (int i = 1; i <= 3; i++) {
        double x, y, z;
        cout << "Test case: " << i << endl;
        cout << "Input: ";
        do {
            cin >> x >> y >> z;
        } while (not((x > 0 && y > 0 && z > 0) && (x + y > z) && (x + z > y) && (y + z > x)));
        double p = (x + y + z) / 2;
        printf("Output: %.2f %.2f\n", p * 2, sqrt(p * (p - x) * (p - y) * (p - z)));
    }
    return 0;
};
