#include <iostream>

using namespace std;

void count_unique(int a[], int size, int& counter){
    int b[100], index = -1;
    for(int i = 0; i <= size -1; ++i){
        bool check = 0;
        cout << "a[i] = " << a[i] <<endl;
        if(index != -1){
            for(int j = 0; j <= index; ++j){
                if(a[i] == b[j]){
                    check = 1;
                    break;
                }
            }
        }
        if(check == 1) continue;
        else{
            ++counter;
            for(int k = 0; k <= size -1; ++k){
                if(i == k) continue;
                else if(a[i] == a[k]){
                    ++index;
                    b[index] = a[i];
                    break;
                }
            }
        }
         cout << "counter = " << counter <<endl;
    }
}

int main() {
    /*
    int size, temp, result, counter = 0;;
    cin >> size;
    int num[1000];
    for (int i = 0; i <= size - 1; ++i) {
        cin >> temp;
        num[i] = temp;
    }
    count_unique(num, size, counter);
    cout << counter << endl;
    return 0;*/
    char fname[100];
    cin.get(fname, 100, '\n');
    cout << fname << endl;
    cin.ignore(1000,'\n');
    cin.get(fname, 100, '\n');
    cout << fname << endl;
}
