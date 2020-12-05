#include <iostream>
#include <string>
#include "array.h"

std::string inversed(std::string a) {
	std::string temp;
	for (int i = a.length() - 1; i >= 0; --i) {
		temp += a[i];
	}
	return temp;
}

std::string inversed_word(std::string a) {
	std::string temp, result;
	for (int i = a.length() - 1; i >= 0; --i) {
		if (a[i] != ' ') {
			temp += a[i];
		}
		else {
			temp = inversed(temp);
			result = result + temp + ' ';
			temp.clear();
			continue;
		}
	}
	temp = inversed(temp);
	return result + temp;
}

std::string name(std::string& a) {
	int i = 0;

	while (a[0] == ' ' || a[a.length() - 1] == ' ') {
		if (a[0] == ' ') a.erase(0, 1);
		if (a[a.length() - 1] == ' ') a.erase(a.length() - 1, 1);
	}

	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == ' ' && a[i + 1] == ' ') {
			a.erase(i, 1);
			--i;
		}
	}

	for (int i = 0; i < a.length(); ++i) {
		if (i == 0 || (a[i] != ' ' && a[i - 1] == ' ')) a[i] = toupper(a[i]);
		else a[i] = tolower(a[i]);
	}
	return a;
}

bool compare(std::string a, std::string b) {
	if (a.length() != b.length()) return 0;
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] != b[i]) return 0;
	}
	return 1;
}

bool find(std::string a, std::string b) {
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == b[0]) {
			int k = i;
			for (int j = 0; j < b.length(); ++j) {
				if ((k - i) == b.length() - 1) return 1;
				if (b[j] == a[k]) ++k;
				else break;
			}
		}
	}
	return 0;
}

void find_odd_even(int a[], int size, int& odd, int& even) {
	for (int i = 0; i < size; ++i) {
		if (a[i] % 2 == 0) {
			even = a[i];
			break;
		}
	}
	for (int i = 0; i < size; ++i) {
		if (a[i] % 2 != 0) {
			odd = a[i];
			break;
		}
	}

	for (int i = 0; i < size; ++i) {
		if (a[i] % 2 == 0) {
			if (even < a[i]) even = a[i];
		}
		else if (odd > a[i]) odd = a[i];
	}
	return;
}

double average_even(int a[], int size) {
	double sum = 0, counter = 0;
	for (int i = 0; i <= size - 1; ++i) {
		if (a[i] % 2 == 0){
			sum += a[i];
			++counter;
		}
	}
	if (counter != 0) return sum / counter;
	else return 0;
}

bool prime(int n) {
	if (n == 2)
		return 1;
	else if (n % 2 == 0 || n == 1)
		return 0;
	else {
		for (int i = 3; i <= sqrt(n); i += 2) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

void sort_even(int(&a)[100], int size) {
	int b[100] = {}, temp, index = 0;
	for (int i = 0; i <= size - 1; ++i) {
		if (a[i] % 2 == 0) {
			b[index] = a[i];
			++index;
		}
	}
	
	int n = index;
	while (n > 0) {
		for (int i = 0; i < n - 1; ++i) {
			if (b[i] > b[i + 1]) {
				temp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = temp;
			}
		}
		--n;
	}

	n = 0;
	for (int i = 0; i < size; ++i) {
		if (a[i] % 2 == 0) {
			a[i] = b[n];
			++n;
		}
	}
}


int check_order(int a[], int size) {
	int check = -1, n = 0;
	for (int i = 0; i < size - 1; ++i) {
		if (a[i] == a[i + 1]) continue;
		else if (a[i] < a[i + 1]) check = 0;
		else check = 1;
		n = i;
		break;
	}
	if (check == -1) return -1;
	if (check == 0) {
		for (int i = n; i < size - 1; ++i) {
			if (a[i] <= a[i + 1]) continue;
			else return -1;
		}
		return 0;
	}
	else {
		for (int i = n; i < size - 1; ++i) {
			if (a[i] >= a[i + 1]) continue;
			else return -1;
		}
		return 1;
	}
}

void count_unique(int a[], int size, int& counter) {
	int b[100], index = -1;
	for (int i = 0; i <= size - 1; ++i) {
		bool check = 0;
		if (index != -1) {
			for (int j = 0; j <= index; ++j) {
				if (a[i] == b[j]) {
					check = 1;
					break;
				}
			}
		}
		if (check == 1) continue;
		else {
			++counter;
			for (int k = 0; k <= size - 1; ++k) {
				if (i == k) continue;
				else if (a[i] == a[k]) {
					++index;
					b[index] = a[i];
					break;
				}
			}
		}
	}
}

int secondmax(int a[], int size) {
	int max, secondmax = -1;
	for (int i = 0; i <= size - 1; ++i) {
		if (i == 0) {
			max = a[i];
			continue;
		}
		if (a[i] > max) {
			secondmax = max;
			max = a[i];
		}
		else if (a[i] < max && a[i] > secondmax)
			secondmax = a[i];
		}
	return secondmax;
}