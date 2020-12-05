#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

// Test case 1
// Input: 5 5 5 0
// Output: 5 PASSED

// Test case 2
// Input: 10 10 10 1
// Output: 0 FAILED

// Test case 3
// Input: 9.5 8.5 8.0 0
// Output: 8.6 PASSED

int main()
{
    cout << "This program will return the score and the result of a student." <<endl;
    cout << "Please input assignment, lab, final score respectively." <<endl;
    for(int i = 1; i <= 3; i++){
        cout <<"Test case " << i <<endl;
        cout <<"Input: ";
        double assignment, lab, Final, score;
        int cheating;
        do
        {
            cin >> assignment >> lab >> Final >> cheating;
        }
        while(not(((assignment >= 0) && (lab >= 0) && (Final >= 0)) && ((assignment <= 10) && (lab <= 10) && (Final <= 10)) && (cheating>=0 && cheating <=1)));
        if(cheating)
        {
            score = 0;
        }
        else
            score = 0.3 * assignment + 0.3*lab + 0.4 * Final;
        cout <<"Output: ";
        if(score >= 5)
        {
            cout << setprecision(2) << score << " PASSED" <<endl;
        }
        else
            cout << setprecision(2) << score << " FAILED" <<endl;
    }
    return 0;
};
