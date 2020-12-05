#include <iostream>
#include <string>

using namespace std;

int main() {
    /*int output = 0, temp = 1;
    string input;
    cin >> input;
    while(input.size() > 0) {
        if(input[0] == '1') {
            for(int i = 1; i < input.size(); ++i) {
                temp *= 2;
            }
            input.erase(0,1);
            output += temp;
            temp = 1;
        } else {
            input.erase(0,1);
            continue;
        }
    }
    cout << output;
    return 0;*/
    int input, counter = 0, temp = 1, output = 0;
    cin >> input;
    while(input > 0){
        if(input % 2 != 0){
            for(int i = 0; i < counter; ++i){
                temp *= 2;
            }
            counter++;
            output += temp;
            temp = 1;
            input /= 10;
        }
        else{
            counter++;
            input /= 10;
            continue;
        }
    }
    cout << output;
}
