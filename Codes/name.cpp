#include <iostream>
#include <string>

using namespace std;

int main(){
    string a = "    nguyen van a   ";
    while (a[0] == ' ' && a[a.length() - 1] == ' ') {
		if (a[0] == ' ') a.erase(0, 1);
		if (a[a.length() - 1] == ' ') a.erase(a.length() - 1, 1);
	}
	if(a[0] == ' ') cout << "yes" <<endl;
	cout << "." << a << ".";
    return 0;
}
