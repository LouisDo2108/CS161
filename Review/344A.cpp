#include <iostream>

using namespace std;

int input, temp, number, count = 0;

int main() {

    cin >> number;
    do{
        cin >> input;
        temp = input;
        //cout <<"Temp: " << temp[0] << temp[1];
        //cout << (temp == input);
    }while(0);

    for(int i = 1; i <= (number - 1); ++i){
        cin >> input;
        //cout <<"Input: " << input <<endl;
        //cout <<"Temp: " << temp  <<endl;
        if(temp != input){
            ++count;
            temp = input;
        }
        else continue;
    }
    cout << (count + 1);
    return 0;
}
