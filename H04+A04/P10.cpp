#include <iostream>
#include <iomanip>

using namespace std;

// 19125106
// Huynh Tuan Luc
// 19CTT1

// Test case 1
// Input: 2 3
// Output: 8.00

// Test case 2
// Input: 3 3
// Output: 27.00

// Test case 3
// Input: 1.5 2
// Output: 2.25


int main(){

    cout << "This program will return the result of x to the nth." <<endl;
    cout << "Please input a real number x and a positive integer n respectively." << endl;

    double x;
    int n;
    double exp = 1;

    do{
        cin >> x;
        cin >> n;
    }while(n < 0);

    for(int i = 1; i <= n; ++i){
        exp *= x;
    }

    cout << setprecision(2) << fixed << exp;
    return 0;
}
