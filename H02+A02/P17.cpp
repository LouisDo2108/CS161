#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 2361000
// Output:
/* 500000: 4
   200000: 1
   100000: 1
    50000: 1
    20000: 0
    10000: 1
     5000: 0
     2000: 0
     1000: 1 */

// Test case 2
// Input: 1200000
// Output:
/* 500000: 2
   200000: 1
   100000: 0
    50000: 0
    20000: 0
    10000: 0
     5000: 0
     2000: 0
     1000: 0 */

// Test case 3
// Input: 3559000
// Output:
/* 500000: 7
   200000: 0
   100000: 0
    50000: 1
    20000: 0
    10000: 0
     5000: 1
     2000: 2
     1000: 0 */
/* Input: money
   Output: minimum number of currency notes needed. (Each line display (the
   currency note: count needed))
   Up to 3 test cases */

int main()
{
    cout << "This program will return the minimum number of currency notes "
            "needed for the given money."
         << endl;
    cout << "Please input the money value." << endl;
    for (int i = 1; i <= 3; i++) {
        int money, count;
        string whitespace;
        int change[10] = { 0, 500000, 200000, 100000, 50000,
            20000, 10000, 5000, 2000, 1000 };
        cout << "Test case: " << i << endl;
        cout << "Input: ";
        cin >> money;
        cout << "Output:" << endl;
        for (int i = 1; i <= 9; i++) {
            cout.width(6);
            count = money / change[i];
            cout << change[i] << ": " << count << endl;
            /*Alternatively without using cout.width():
      cout << whitespace << change[i] << ": " << count <<endl;
      if(i % 3 == 0) whitespace += " ";*/
            money %= change[i];
        }
    }
    return 0;
};
