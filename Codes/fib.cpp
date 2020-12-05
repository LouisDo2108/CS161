#include <iostream>

using namespace std;

int main(){
	int n, a, b, c;
	cin >> n;
	cout <<endl;
	cout << 1 << " ";
	if(n == 1){
		return 0;
	}else if(n == 2){
        cout << 1;
        return 0;
	}else{
	    cout << 1 << " ";
		a = 1;
		b = 1;
		//temp = 1;
		for(int i = 3; i <= n; ++i){
			c = a + b;
			a = b;
			//b = temp;
			b = c;
			cout << c << " ";
		}
	}
	return 0;
}
