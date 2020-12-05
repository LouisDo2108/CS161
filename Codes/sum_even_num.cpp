#include <iostream>

using namespace std;

int main(){
    int input, sum = 0;
    while(input != 0){
        cin >> input;
        if((input % 2) == 0) sum += input;
    }
    cout << sum;
    return 0;
}
