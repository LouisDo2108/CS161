#include <iostream>

using namespace std;

char input, temp;
int n, SF, FS;

int main(){
    cin >> n;
    cin >> input;
    temp = input;
    for(int i = 1; i <= n - 1; ++i){
        cin >> input;
        if(input == temp) continue;
        else if(input != temp){
            if(input == 'S') ++FS;
            else ++SF;
            temp = input;
        }
    }
    if(SF > FS) cout << "YES";
    else cout << "NO";
    return 0;
}
