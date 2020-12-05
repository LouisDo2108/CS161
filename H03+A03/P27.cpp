#include <iostream>

using namespace std;

// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 1500000 1 2
// Output: 1530000

// Test case 2
// Input: 1500000 2 2
// Output: 1560600

// Test case 3
// Input: 1000000 12 7.8
// Output: 2252186


int balance, month, rate;
int main() {
    cout << "This program will return the new balance with the given balance, rate after a given month." <<endl;
    cout << "Please input the balance, month, rate respectively." <<endl;
    cout <<"(The balance and month must be a positive integer, " << endl;
    cout <<"the rate is a real number which is 0 < rate <100)." <<endl;
    do {
        cin >> balance;
        cin >> month;
        cin >> rate;
    } while(!((balance > 0) && (month > 0) && ((0 < rate) && (rate < 100))));

    for(int i = 1; i <= month; i++) {
        balance += balance * rate * 0.01;
    }
    cout << balance;
    return 0;
};
