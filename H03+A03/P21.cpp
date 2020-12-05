#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case
// Input: 4.74
// Output: 4.5

// Test case 2
// Input: 5.2
// Output: 5

// Test case 3
// Input: 8.56
// Output: 8.5


int main() {
    cout << "This program will return the real number you inputed which is already rounded to 0.5" <<endl;
    cout << "Please input a positive real number: ";
    double x;
    do {
        cin >> x;
    } while(x < 0);
    double decimal = x - int(x);
    if(decimal > 0.5 && decimal < 1)
        cout << int(x) + 0.5;
    else
        cout << int(x);
    return 0;
}
