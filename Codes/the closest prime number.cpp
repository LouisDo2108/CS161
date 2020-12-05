#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int input);
int closest(int input);

int main() {
    cout << "Enter an integer: ";
    int input;
    cin >> input;
    cout << closest(input);
    return 0;
}

bool is_prime(int input) {
    if(input == 2)
        return true;
    else if(input % 2 == 0 || input < 2)
        return false;
    else {
        for(int i = 3; i <= sqrt(input); i += 2) {
            if(input % i == 0)
                return false;
        }
        return true;
    }
}

int closest(int input) {
    if(input <= 2)
        return 2;
    else if(is_prime(input))
        return input;
    else {
        int i = input;
        int j = input;
        while(1){
            if(is_prime(j)) return j;
            if(is_prime(i)) return i;
            --j;
            ++i;
        }
    }
}
