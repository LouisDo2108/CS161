#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 1 2 3 4
// Output: 4 1

// Test case 2
// Input: 2 3 4 5
// Output: 5 2

// Test case 3
// Input: 3 7 9 10
// Output: 10 3

int main()
{
    cout << "This program will return the max and the min of the given integers." <<endl;
    int a, b, c, d;
    cout <<"Input a, b, c, d respectively: " <<endl;
    cin >> a >> b >> c >> d;
    cout << max(max(a, b), max(c, d)) << " " << min(min(a, b), min(c,d));
};
