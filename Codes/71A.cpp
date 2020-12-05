#include <iostream>
#include <string>

using namespace std;

int main() {
    int lines;
    string input;
    cin >> lines;
    for(int i = 1; i <= lines ; ++i){
        cin >> input;
        if(input.size() <= 10) cout << input <<endl;
        else cout << input[0] << input.size() - 2 << input[input.size() - 1]<<endl;
    }
    return 0;
}
