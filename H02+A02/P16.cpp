#include <iostream>
#include <string>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 12345
// Output: 5

// Test case 2
// Input: 99999
// Output: 5

// Test case 3
// Input: 16071
// Output: 5

/*Input: x(10000 <= x <= 99999)
  Output: the unit value of the digit sum of x
  Up to 3 test cases.
*/
int main()
{
    cout << "This program will return the unit value of the digit sum of x." << endl;
    cout << "For example: 12345 --> 15 (1 + 2 + 3 + 4 + 5) --> 5" << endl;
    cout << "Please input a number such that 10000 <= input <= 99999" << endl;

    for (int i = 1; i <= 3; i++) {
        string x;
        int num = 0, temp;
        cout << "Test case: " << i << endl;
        cout << "Input: ";
        cin >> x;
        for (int i = 0; i < 5; i++) {
            temp = int(x[i]) - '0';
            num += temp;
            if (num >= 10)
                num -= 10;
        }
        cout << "Output: " << num << endl;
    }
    return 0;
};
