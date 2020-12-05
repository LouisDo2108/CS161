#include <iostream>

using namespace std;

int n, a, check;

int main() {
    cin >> n;
    if(n == 1) {
        cin >> a;
        if(a == 1)
            cout << "YES";
        else
            cout << "NO";
    } else {
        for(int i = 1; i <= n; ++i) {
            cin >> a;
            if(a == 0)
                ++check;
            if(check > 1) {
                cout << "NO";
                return 0;
            }
        }
        if(check == 0) {
            cout << "NO";
        } else
            cout << "YES";
        return 0;
    }
    }
