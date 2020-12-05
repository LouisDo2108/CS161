#include <iostream>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case
// Input: 2020
// Output: Nam nhuan

// Test case 2
// Input: 2019
// Output: Khong phai nam nhuan

// Test case 3
// Input: 1800
// Output: Khong phai nam nhuan

int main()
{
    cout << "This program will return whether the year you inputed is a leap year." <<endl;
    int year;
    cout <<"Please input the year you want to evaluate: " <<endl;
    do
    {
        cin >> year;
    }
    while(not(year > 0));
    if((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) cout << "Nam nhuan";
    else cout << "Khong phai nam nhuan";
};
