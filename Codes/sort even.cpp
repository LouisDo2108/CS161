#include <iostream>
#include <string>

using namespace std;

void sort_even(int(&a)[100], int size) {
	int b[100], temp, index = 0;
	for (int i = 0; i <= size - 1; ++i) {
		if (a[i] % 2 == 0) {
			b[index] = a[i];
			++index;
		}
	}
	for (int i = 0; i < index; ++i) {
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Index = " << index << std::endl;
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

	for (int i = 0; i < index; ++i) {
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;

	n = 0;
	for (int i = 0; i < size; ++i) {
		if (a[i] % 2 == 0) {
			a[i] = b[n];
			++n;
		}
	}
}

int main() {
    /*
    int size, temp;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; ++i) {
        cin >> temp;
        num[i] = temp;
    }
    sort_even(num, size);
    for (int i = 0; i < size; ++i) {
        cout << num[i] << " ";
    }
    return 0;
    */
    char i[10];
    cin.getline(i,10,'\0');
    cout << i;
}
