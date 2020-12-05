#include <iostream>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 1000 1211
// Output: 211

// Test case 2
// Input: 900 1200
// Output: 300

// Test case 3
// Input: 600 800
// Output: 200

/* Input: 2 integers previous, current (current > previous > 0)
   Output: electricity consumption
   Up to 3 test cases. */

int main()
{
    cout << "This program will return the electricity consumption." << endl;
    cout << "Please enter the previous value and the current value respectively." << endl;
    for (int i = 1; i <= 3; i++) {
        int previous, current;
        cout << "Test case: " << i << endl;
        cout << "Input: ";
        do {
            cin >> previous >> current;
        } while (not((previous <= current) && (current >= 0) && (previous >= 0)));
        cout << "Output: " << current - previous << endl;
    }
    return 0;
};
