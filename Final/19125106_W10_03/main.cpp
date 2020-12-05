#include <iostream>
#include <string>
#include "function.h"

using namespace std;

int main() {
	//Problem 1
	int a[100], size;
	cout << maximum_product(a, size) << endl;

	//Problem 2
	string one, two;
	if (circular_shift(one, two)) cout << "Yes" << endl;
	else cout << "No" << endl;

	//Problem 3
	string three;
	if (circular(three)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}

