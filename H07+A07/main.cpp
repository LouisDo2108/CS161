#include <iostream>
#include <iomanip>
#include "function.h"

using namespace std;

void print() {
	cout << "Enter 0  to exit." << endl;
	cout << "Enter 1  to execute the program P09: solveQuadratic." << endl;
	cout << "Enter 2  to execute the program P15: tomorrow." << endl;
	cout << "Enter 3  to execute the program P16: yesterday." << endl;
	cout << "Enter 4  to execute the program P30: PerfectNumber." << endl;
	cout << "Enter 5  to execute the program P31: Prime." << endl;
	cout << "Enter 6  to execute the program P51: LargestNum." << endl;
	cout << "Enter 7  to execute the program P56: AllEvenNum." << endl;
	cout << "Enter 8  to execute the program P60: gcd." << endl;
	cout << "Enter 9  to execute the program P78: Factorization." << endl;
	cout << "Enter 10 to execute the program P80: NearestPrime." << endl;
}

int main() {
	int i;

	print();

	while (cin >> i) {
		switch (i) {
			case 0:
			{
				cout << "Exit!" << endl;
				return 0;
			}

			case 1:
			{
				cout << "P09: solveQuadratic" << endl;
				cout << "This program will solve the quadratic equation: a*x^2 + b*x + c = 0." << endl;
				cout << "Please enter a, b, c respectively:" << endl;

				double a, b, c, x1, x2, x;
				bool check = false;
				cin >> a >> b >> c;
				int result = solveQuadratic(a, b, c, x1, x2, x, check);

				if (check) {
					if (result == 1) cout << "x = " << setprecision(2) << fixed << x << endl;
					else {
						cout << "x1 = " << setprecision(2) << fixed << x1;
						cout << ", x2 = " << setprecision(2) << fixed << x2 << endl;
					}
				}
				else {
					if (result == 0)
						cout << "No solution." << endl;
					else if (result == -1)
						cout << "All real numbers" << endl;
				}
				break;
			}

			case 2:
			{
				cout << "P15: tomorrow" << endl;
				cout << "This program will return the next date of the given date." << endl;
				cout << "Please input a date, a month and a year respectively: " << endl;
				int date, month, year;

				do {
					cin >> date >> month >> year;
				} while (not((year > 0) || (month >= 1 && month <= 12) || (1 <= date && date <= 31)));

				tomorrow(date, month, year);
				cout << date << " " << month << " " << year << endl;
				break;
			}

			case 3:
			{
				cout << "P16: yesterday" << endl;
				cout << "This program will return the previous date of the given date" << endl;
				cout << "Please input a date, a month and a year respectively: " << endl;
				int date, month, year;

				do {
					cin >> date >> month >> year;
				} while (not((year > 0) || (month >= 1 && month <= 12) || (1 <= date && date <= 31)));

				yesterday(date, month, year);
				cout << date << " " << month << " " << year << endl;
				break;
			}

			case 4:
			{
				cout << "P30: PerfectNumber" << endl;
				cout << "This program will return whether the integer you inputted is a perfect number." << endl;
				cout << "Please input an integer you want to evaluate." << endl;
			
				int n;
				bool answer;

				do {
					cin >> n;
				} while (n < 0);

				answer = PerfectNumber(n);
				if (answer) cout << "YES" << endl;
				else cout << "NO" << endl;
				break;
			}

			case 5:
			{
				cout << "P31: Prime" << endl;
				cout << "This program will return whether the integer you input is a prime number." << endl;
				cout << "Please input an integer you want to evaluate." << endl;

				int n;
				bool answer;

				do {
					cin >> n;
				} while (n < 0);

				answer = Prime(n);
				if (answer) cout << "YES" << endl;
				else cout << "NO" << endl;
				break;
			}

			case 6:
			{
				cout << "P51: LargestNum." << endl;
				cout << "This program will return the largest number in the given integer." << endl;
				cout << "Please input an integer." << endl;

				int n, answer;
				cin >> n;

				answer = LargestNum(n);
				cout << answer << endl;
				break;
			}

			case 7:
			{
				cout << "P56: AllEvenNum." << endl;
				cout << "This program will return whether the integer you inputed consists of all even numbers." << endl;
				cout << "Please input an integer." << endl;

				int n;
				bool answer;
				cin >> n;
				answer = AllEvenNum(n);

				if (answer) cout << "YES" << endl;
				else cout << "NO" << endl;
				break;
			}

			case 8:
			{
				cout << "P60: gcd." << endl;
				cout << "This program will return the greatest common divisor of 2 given integers." << endl;
				cout << "Please input 2 integers." << endl;

				int a, b, answer;
				cin >> a >> b;

				answer = gcd(a, b);
				cout << answer << endl;
				break;
			}

			case 9:
			{
				cout << "P78: Factorization." << endl;
				cout << "This program will return all the prime factors of the given integer." << endl;
				cout << "Please input a positive integer other than 0." << endl;

				int n, divisor = 2, counter = 0;
				cin >> n;

				while (n > 1) {
					Factorization(n, divisor, counter);
					if (n == 1) break;
					if (counter == 1) {
						cout << divisor << "*";
						counter = 0;
					}
					else if (counter >= 2) {
						cout << divisor << "^" << counter << "*";
						counter = 0;
					}
					++divisor;
				}
				if (counter >= 2)
					cout << divisor << "^" << counter << endl;
				else
					cout << divisor << endl;
				break;
			}

			case 10:
			{
				cout << "P80: NearestPrime." << endl;
				cout << "This program will return nearest prime number of the given integer." << endl;
				cout << "Please input a positive integer other than 0." << endl;

				int n, answer;
				cin >> n;
				answer = NearestPrime(n);

				cout << answer << endl;
				break;
			}

			default: {
				cout << "Error!" << endl;
				break;
			}
		}

		cout << "\n\n";
		print();
	}
}