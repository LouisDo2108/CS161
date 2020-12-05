#include <iostream>
#include <iomanip>
using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 1
// Output: x = -0.50

// Test case 2
// Input: 5 -6
// Output: x = 1.20

// Test case 3
// Input: 0 1
// Output: No solution.


int main()
{
    double a, b;
    cout << "This program will return the root of the equation: ax + b =0" <<endl;
    cout << "Please input a, b respectively." <<endl;
    cout << "Input: ";
    cin >> a >> b;
    if(a == 0 && b == 0)
        cout <<"All real numbers.";
    else if(a == 0)
        cout <<"No solution.";
    else
        cout << "x = " << setprecision(2) << fixed << -(b/a);
    return 0;
}
