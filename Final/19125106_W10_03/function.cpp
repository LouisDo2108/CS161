#include <iostream>
#include <string>
#include "function.h"

using namespace std;

int maximum_product(int a[], int& size) {
	cout << "Problem 1" << endl;
	cout << "Please enter the size of the array: " << endl;
	cin >> size;
	cout << "Please enter the array" << endl;
	for (int i = 0; i < size; ++i) {
		cin >> a[i];
	}
	int temp = 0, result = 0;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (i == j) continue;
			temp = a[i] * a[j];
			if (temp > result) result = temp;
		}
	}
	return result;
}

bool circular_shift(string a, string b) {
	cout << "Problem 2" << endl;
	cout << "Please enter two strings seperated by a space: " << endl;
	cin >> a;
	cin >> b;

	int temp = 0;
	if (a.length() != b.length()) return 0;
	else {
		for (int i = 0; i < b.length(); ++i) {
			if (b[i] == a[0]) temp = i;
		}
	}

	for (int i = 0; i < b.length(); ++i) {
		if (temp == b.length()) temp = 0;
		if (b[temp++] != a[i]) return 0;
	}
	return 1;
}

bool circular(string a) {
	cout << "Problem 3" << endl;
	cout << "Please enter the string: " << endl;
	cin >> a;

	int ns = 0, we = 0;
	for (int i = 0; i < a.length(); ++i) {
		switch (a[i]) {
		case 'N':
		{

			++ns;
			break;
		}
		case 'S':
		{
			--ns;
			break;
		}
		case 'W':
		{
			--we;
			break;
		}
		case 'E':
		{
			++we;
			break;
		}
		default: break;
		}
	}
	if (ns == 0 && we == 0) return 1;
	else return 0;
}