#include <iostream>

using namespace std;


int main(){
    cout << "This program will ouput the LCM of the input numbers. Terminate if you input 0."
    int input = 1, lcm = 1;
    while(input != 0){
        cin >> input;
        if((input != 0) && ((lcm % input) != 0)) lcm *= input;
    }
    cout << lcm <<endl;
    return 0;
}
