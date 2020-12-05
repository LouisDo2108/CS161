#include <iostream>
#include <string>
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


int main() {
    cout << "This program will return the next date of the given date" <<endl;
    int date, month, year;
    bool leap_year;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout <<"Please input a month and a year respectively: " <<endl;
    do {
        cin >> date >> month >> year;
    } while(not((year > 0) || (month >= 1 && month <= 12) || (1 <= date && date <= 31)));
    if((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
        leap_year = true;

    if(month == 12 && date == 31) {
        year++;
        month = 1;
        date = 1;
    } else if(month == 2 && leap_year == true){
        if(date == 28)  date++;
        else if(date == 29){
            month++;
            date = 1;
        }
    }
    else if(date == day[month]) {
        month++;
        date = 1;
    } else
        date++;
    cout << date << " " << month << " " << year;
};
