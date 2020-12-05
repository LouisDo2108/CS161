#include <iostream>

using namespace std;

int main() {
    int input, divisor = 2, counter = 0;
    cin >> input;
    while(input > 1) {
        if(input % divisor == 0) {
            ++counter;
            input /= divisor;
            continue;
        } else {
            if(input == 1)
                break;
            if(counter == 1) {
                cout << divisor << "*";
                counter = 0;
            } else if(counter >= 2) {
                cout << divisor << "^" << counter << "*";
                counter = 0;
            }
        }
        ++divisor;
    }
    if(counter >= 2)
        cout << divisor << "^" << counter;
    else
        cout << divisor;
    return  0;
}
