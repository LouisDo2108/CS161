#include <iostream>

using namespace std;

int digit_sum(int num);

int main() {
    int input, maxx, temp;
    cin >> input;
    temp = digit_sum(input);
    do {
        cin >> input;
        if(digit_sum(input) > temp) {
            temp = digit_sum(input);
            maxx = input;
        }
    } while(input != 0);

    cout << "The biggest digit sum = " << maxx;
    return 0;
}

int digit_sum(int num) {
    int sum = 0;
    int temp = num;
    while(temp > 1) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}
