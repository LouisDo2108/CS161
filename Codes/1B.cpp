#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int lines, counter = 0;
    string inputs;
    cin >> lines;

    for(int i = 1; i <= lines; ++i) {
        cin >> inputs;
        stringstream ss(inputs);
        char cR, cC;
        int intR, intC;
        ss >> cR >> intR >> cC >> intC;

        if(cR == 'R' && cC == 'C') {
            /*if((intC / 26) >= 1) {
                cout << (char)(64 + (intC / 26));
                     intC -= 26*(intC / 26);
            }
            cout << char(64 + intC) << intR;
            } else
            cout << char(intC) << intR;*/
            while((intC / 26) >= 1) {
                intC /= 26;
                ++counter;
            }
            cout << counter <<endl;
            intC -= pow(intC,counter);
            for(int i = 1; i <= counter; ++i)
                cout << (char)(65);
            //cout << (char)(64+intC);
        }
    }

    return 0;
}
