#include <iostream>
#include <cmath>

using namespace std;

double sum;

double sum_sqrt(int base, int p) {
    int exp = pow(base, p);
    if(p >= 2) {
        sum = sqrt(sum_sqrt(base, p - 1) + exp);
    }
    if (p == 1)
        return sqrt(base);
    else
        return sum;
}

int main() {
    int x, n;
    cin >> x >> n;
    double result = sum_sqrt(x, n);
    cout << result;
    return 0;
}
