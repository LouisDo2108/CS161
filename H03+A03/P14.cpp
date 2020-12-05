#include <iostream>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case
// Input: 1 2019
// Output: 31

// Test case 2
// Input: 2 2019
// Output: 28

// Test case 3
// Input: 2 2020
// Output: 29

int main()
{
    cout << "This program will return the number day in a specific month of a year" <<endl;
    int month, year;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout <<"Please input a month and a year respectively: " <<endl;
    do
    {
        cin >> month;
        cin >> year;
    }
    while(not((year > 0) || (month >= 1 && month <= 12)));
    if((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)) && (month == 2)) cout << day[2] + 1;
    else cout << day[month];
};
