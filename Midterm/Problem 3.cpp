#include <iostream>

using namespace std;

int main() {
    int i, space;
    cin >> i;
    space = i - 1;
    if(i == 0)
        return 0;
    else {
        for(int j = 1; j <= i; ++j) {
            if(j == 1 || j == i) {
                for(int k = 1; k <= i; ++k)
                    cout << "# ";
                cout << endl;
            } else {
                while(space > 1) {
                    for(int k = 1; k < space; ++k) {
                        cout << "  ";
                    }
                    cout << "#" <<endl;
                    space--;

                }

            }
        }
    }
    return 0;
}
