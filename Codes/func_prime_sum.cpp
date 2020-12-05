#include <iostream>
#include <cmath>

using namespace std;

int sum = 0;
int sum_prime(int input);
void print_sum();

int main() {
    int n;
    do {
        cin >> n;
        sum_prime(n);
    } while(n != 0);
    print_sum();
    return 0;
}

int sum_prime(int input) {

    // Sum all the prime numbers from the input list.
    //Parameter: input: user input.

    if(input == 0 || input == 1)
        return 0;
    else if(input == 2)
        sum += input;
    else if(input % 2 == 0)
        return 0;
    else {
        for(int i = 3; i <= sqrt(input); i += 2) {
            if(input % i == 0)
                return 0;
            else
                continue;
        }
        sum += input;
        return 0;
    }
};

void print_sum() {

    // Print the sum of all prime numbers from the input list.

    cout << "Sum of prime = " << sum;
}
