#include <iostream>

using namespace std;

int main(){
    int input, output = 0, mod, counter = 0;
    cin >> input;
    while(input > 0){
        mod = input % 2;
        input /= 2;
        for(int i = 0; i < counter; ++i){
            mod *= 10;
        }
        output += mod;
        counter++;
    }
    cout << output;
    return 0;
}
