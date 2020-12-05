#include <iostream>

using namespace std;

int n, k, a, candy, day_count = 0;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        candy += a;
        if(candy >= 8) {
            k -= 8;
            candy -= 8;
            ++day_count;
        } else if(candy < 8){
                k -= candy;
                candy = 0;
                ++day_count;
        }
        if(k <= 0){
            cout << day_count;
            break;
        }
    }
    if(k > 0) cout << -1;
    return 0;
}
