#include <iostream>
#include <string>

using namespace std;

string input, temp;
int len;
bool check;

int main() {
    cin >> input;
    temp = input;
    int len = temp.size();
    while(temp[len - 1] == '0') {
        check = true;
        temp.pop_back();
        len = temp.size();
    }
    if((check == false && len == 2) || (len == 1)){
        cout << "YES";
        return 0;
    }
    do {
        if(temp[0] == temp[len - 1]) {
            temp.erase(0,1);
            temp.pop_back();
            len = temp.size();
            continue;
        } else {
            cout << "NO";
            return 0;
        }

    } while(len > 1);
    cout << "YES";

    return 0;
}
