#include <iostream>
#include <string>
#include <iomanip>
#include "array.h"

using namespace std;
const int s = 100;

void print() {
	cout << "Enter 0  to exit." << endl;
	cout << "Enter 1 to execute inversed." << endl;
	cout << "Enter 2 to execute inversed_word." << endl;
	cout << "Enter 3 to execute name." << endl;
	cout << "Enter 4 to execute compare." << endl;
	cout << "Enter 5 to execute find." << endl;
	cout << "Enter 6 to execute find_odd_even." << endl;\
	cout << "Enter 7 to execute average_even." << endl;
	cout << "Enter 8 to execute prime." << endl;
	cout << "Enter 9 to execute sort_even." << endl;
	cout << "Enter 10 to execute check_order." << endl;
	cout << "Enter 11 to execute count_unique." << endl;
	cout << "Enter 12 to execute second_max." << endl;
}

int main()
{
	print();
	int i;
	while (cin >> i) {
		switch(i) {
			case 1: {
				cout << "This program will return the inversed version of the given string." << endl;
				cout << "Please input a string." << endl;
				string a;
				cin.ignore();
				getline(cin,a);
				cout << inversed(a) << endl;
				break;
			}

			case 2: {
				cout << "This program will return the inversed_word version of the given string." << endl;
				cout << "Please input a string." << endl;
				string a;
				cin.ignore();
				getline(cin, a);
				cout << inversed_word(a);
				break;
			}

			case 3: {
				cout << "This program will return the right format of the given name." << endl;
				cout << "Please input a name." << endl;
				string a;
				cin.ignore();
				getline(cin, a);
				cout << name(a) << endl;
				break;
			}


			case 4: {
				cout << "This program will evaluate whether the two given strings are identical." << endl;
				cout << "Please input two strings separated by an enter." << endl;
				string a, b;
				cin.ignore();
				getline(cin, a);
				getline(cin, b);
				cout << compare(a, b) << endl;
				break;
			}

			case 5: {
				cout << "This program will evaluate whether the second string is in the first string." << endl;
				cout << "Please input two strings." << endl;
				string a, b;
				cin.ignore();
				getline(cin, a);
				getline(cin, b);
				cout << find(a, b) << endl;
				break;
			}

			case 6: {
				cout << "This program will return the largest even number and  the smallest odd number." << endl;
				cout << "Please input the array's size n." << endl;
				cout << "And input n integers seperate by a space." << endl;
				int size, temp, odd = 0, even = 0;
				cin >> size;
				int num[s];
				for (int i = 0; i < size; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				find_odd_even(num, size, odd, even);
				cout << even << " " << odd << endl;
				break;
			}

			case 7: {
				cout << "This program will return average of the sum of all even integers in the given array." << endl;
				cout << "Please input the array's size n" << endl;
				cout << "And input n integers seperate by a space." << endl;
				int size, temp;
				double result;
				cin >> size;
				int num[s];
				for (int i = 0; i < size; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				result = average_even(num, size);
				cout << setprecision(2) << fixed << result << endl;
				break;
			}

			case 8: {
				cout << "This program will return the count of all the prime numbers in the given array ";
				cout << "and print them out." << endl;
				cout << "Please input the array's size n" << endl;
				cout << "And input n integers seperate by a space." << endl;
				int size, temp, counter = 0, prime_num[s];
				cin >> size;
				int num[s];
				for (int i = 0; i < size; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				for (int i = 0; i < size; ++i) {
					if (prime(num[i])) {
						prime_num[counter] = num[i];
						++counter;
					}
				}

				cout << counter << endl;
				for (int i = 0; i < counter; ++i) {
					cout << prime_num[i];
					if (i != counter - 1) cout << " ";
				}
				break;
			}
			
			case 9: {
				cout << "This program will sort all the even numbers in the given array." << endl;
				cout << "Please input the array's size n" << endl;
				cout << "And input n integers seperate by a space. " << endl;
				int size, temp;
				cin >> size;
				int num[s];
				for (int i = 0; i < size; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				sort_even(num, size);
				for (int i = 0; i < size; ++i) {
					cout << num[i] << " ";
				}
				break;
			}

			case 10: {
				cout << "This program will check whether the array is incremented or decremented or neither." <<endl; 
				cout << "Please input the array's size n;" << endl;
				cout << "And input n integers seperate by a space. " << endl;

				int size, temp, result;
				cin >> size;
				int num[s];
				for (int i = 0; i <= size - 1; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				result = check_order(num, size);
				if (result == 0) cout << "Tang" << endl;
				else if (result == 1) cout << "Giam" << endl;
				else cout << "Khong tang khong giam" << endl;
				break;
			}

			case 11: {
				cout << "This program will return the count of the unique values in the given array." << endl;
				cout << "Please input the array's size n;" << endl;
				cout << "And input n integers seperate by a space. " << endl;
				int size, temp, counter = 0;;
				cin >> size;
				int num[s];
				for (int i = 0; i <= size - 1; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				count_unique(num, size, counter);
				cout << counter << endl;
				break;
			}

			case 12: {
				cout << "This program will return the second max value in the given array." << endl;
				cout << "Please input the array's size n;" << endl;
				cout << "And input n integers seperate by a space. " << endl;
				int size, temp, result;
				cin >> size;
				int num[s];
				for (int i = 0; i <= size - 1; ++i) {
					cin >> temp;
					num[i] = temp;
				}
				result = secondmax(num, size);
				if (result == -1) cout << "No second max." << endl;
				else cout << result << endl;
				break;
			}

			default: {
				cout << "Error!" << endl;
				break;
			}
		}
		if (i == 0) return 0;
		else {
			cout << "\n\n";
			print();
		}
	}
}		
