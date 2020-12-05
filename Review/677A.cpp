#include <iostream>

using namespace std;

int n, h, temp, w;

int main() {
    cin >> n >> h;
    for(int i = 1; i <= n; ++i){
        cin >> temp;
        if(temp <= h) ++w;
        else w += 2;
    }
    cout << w;
    return 0;
}
