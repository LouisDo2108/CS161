#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Prime number array
    /*int n;
    bool a;
    cin >> n;
    cout << 2 << endl;
    for(int i = 3; i <= n; i += 2){
        for(int j = 3; j <= sqrt(i); j += 2){
            if(i % j == 0){
                a = true;
                break;
            } else a = false;
        }
        if(a) continue;
        else cout << i << endl;
    }
    return 0;*/
    // Max, min, secondmax, secondmin;
    double input, mmin = 0, secondmin = 0, mmax, secondmax = 0;
    cin >> input;
    if(input == 0)
        return 0;
    if(input != 0)
        mmax = input;
    while(input != 0) {
        cin >> input;
        if(input == 0)
            break;
        else if(secondmax == 0 && input < mmax)
            secondmax = input;
        else if(input > mmax) {
            secondmax = mmax;
            mmax = input;
        } else if(secondmin == 0 && secondmax != 0) {
            if(input < secondmax)
                secondmin = input;
        } else if(mmin == 0 && secondmin != 0) {
            if(input < secondmin)
                mmin = input;
        } else if(mmin != 0) {
            if(input < mmin) {
                secondmin = mmin;
                mmin = input;
            }
        }
        /*else if(secondmax != 0 && secondmin == 0) {
            if(input < secondmax)
                secondmin = input;
        } else if(secondmin != 0 && mmin == 0) {
            if(input < secondmin)
                mmin = input;
        } else if(secondmin != 0 && input < secondmin) {
            secondmin = mmin;
            mmin = input;
        }
        */
    }

    if(secondmax == 0)
        cout << "There is no second max";
    else {
        cout << "The max value is " << mmax <<endl;
        cout << "The second max value is " << secondmax <<endl;
        cout << "The second min value is " << secondmin <<endl;
        cout << "The min value is " << mmin <<endl;
    }
    return 0;
}
