#include <iostream>
#include <string.h>

using namespace std;

void name(char (&str)[200]) {
    int l = strlen(str);
    while(str[0] == ' ')
        for(int a = 0; a < strlen(str); ++a)
            str[a] = str[a+1];

    l = strlen(str);
    while(str[l - 1] == ' ') {
        str[l] = '\0';
        --l;
    }

    l = strlen(str);
    for(int i = 0; i < l; ++i) {
        while(str[i] == ' ' && str[i + 1] == ' '){
            for(int j = i; j < l; ++j)
                str[j] = str[j + 1];
        }
    }

    for(int i = 0; i < strlen(str); ++i) {
        if(i == 0)
            str[i] = toupper(str[i]);
        else if(str[i] != ' ' && str[i - 1] == ' ')
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }
    cout << str << "." << endl;
    return;
}

bool substring(char a[200], char b[200]){
    for(int i = 0; i < strlen(a); ++i){
        if(b[0] == a[i]){
            for(int j = 0; j < strlen(b); ++j){
                if(a[i + j] != b[j]) break;
                else if(j == (strlen(b) - 1)) return 1;
            }
        }
    }
    return 0;
}

int main() {
    char a[200], b[200];
    cin.get(a, 200, '\n');
    cin.ignore();
    cin.get(b,200,'\n');
    //name(a);
    if(substring(a, b)) cout << "yes";
    else cout << "no";
    return 0;
}
