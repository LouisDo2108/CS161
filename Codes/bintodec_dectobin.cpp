#include <iostream>

using namespace std;

int bin_to_dec(int input);
int dec_to_bin(int input);


int main() {
    int input;
    cin >> input;
    cout << bin_to_dec(input) << endl;
    cout << dec_to_bin(bin_to_dec(input));
    return 0;
}

int bin_to_dec(int input) {
    int dec = 0, degree = 0, temp = 1;
    while(input > 0) {
        if(input % 10 != 0) {
            for(int i = 0; i < degree; ++i) {
                temp *= 2;
            }
            dec += temp;
            temp = 1;
        }
        degree++;
        input /= 10;
    }
    return dec;
}

int dec_to_bin(int input) {
    int bin = 0, degree = 0, temp = 1;
    while(input > 0) {
        if(input % 2 != 0) {
            for(int i = 0; i < degree; i++) {
                temp *= 10;
            }
            bin += temp;
            temp = 1;
        }
        degree++;
        input /= 2;
    }
    return bin;
}
