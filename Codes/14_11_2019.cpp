#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    //Input sum_even sum_odd

    int input = -1, count = 0, sum_odd = 0, sum_even = 0, sum = 0;
    bool a = true;
    do{
       if(input == 0) break;
       else{
            cin >> input;
            count++;
            if(count % 2 != 0) sum_odd += input;
            else sum_even += input;
            if(input % 2 == 0) continue;
           else {
               for(int i = 3; i <= sqrt(input); i += 2) {
                   if(input % i == 0) {
                       a = false;
                       break;
                   } else
                       continue;
               }
               if(a == true)
                   sum += input;
               else
                   continue;
       }
    }
    }while(input != 0);

    cout << "Sum: " << sum << endl;
    cout << "sum_odd: " << sum_odd <<endl;
    cout << "sum_even: " << sum_even <<endl;
    cout << "sum_odd ";
    if(sum_odd > sum_even) cout << ">";
    else if(sum_odd < sum_even) cout << "<";
    else cout << "=";
    cout << " sum_even";

    ////////////////////////
    // Sum of the prime number the user input
    /*int input = -1, sum = 0;
    bool a = true;
    do {
        cout << "Input: ";
        cin >> input;
        if(input == 0)
            break;
        if(input <= 2) {
            continue;
        } else {
            if(input % 2 == 0)
                continue;
            else {
                for(int i = 3; i <= sqrt(input); i += 2) {
                    if(input % i == 0) {
                        a = false;
                        break;
                    } else
                        continue;
                }
                if(a == true)
                    sum += input;
                else
                    continue;
            }
        }
    } while(input != 0);
    cout << "Output: " << sum;*/
    return 0;
}
