#include <cmath>
#include <iostream>
#include "function.h"

using namespace std;

int solveQuadratic(double a, double b, double c, double& x1, double& x2, double& x, bool& check) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				return -1;
			else
				return 0;
		}
		else {
			check = true;
			x = (-c / b);
			return 1;
		}
	}
	else {
		check = true;
		double delta = pow(b, 2) - 4 * a * c;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
		}
		else if (delta == 0) {
			x = -b / (2 * a);
			return 1;
		}
		else {
			check = false;
			return 0;
		}
		return 2;
	}
}

void tomorrow(int& date, int& month, int& year) {
	bool leap_year = false;
	int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
		leap_year = true;
	if (month == 12 && date == 31) {
		year++;
		month = 1;
		date = 1;
	}
	else if (month == 2 && date == 28 && leap_year == true)
		date++;
	else if (date == day[month]) {
		month++;
		date = 1;
	}
	else
		date++;
	return;
};

void yesterday(int& date, int& month, int& year) {
	bool leap_year = false;
	int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
		leap_year = true;

	if (month == 1 && date == 1) {
		year--;
		month = 12;
		date = 31;
	}
	else if (month == 3 && date == 1) {
		if (leap_year == true) {
			--month;
			date = 29;
		}
		else {
			--month;
			date = 28;
		}
	}
	else if (date == 1) {
		--month;
		date = day[month];
	}
	else
		--date;
	return;
};

bool PerfectNumber(int n) {
	int temp = 0;
	for (int i = 1; i <= (n / 2); ++i) {
		if (n % i == 0)
			temp += i;
	}

	if (temp == n)
		return 1;
	else
		return 0;
}

bool Prime(int n) {
	if (n == 2) return 1;
	else if (n < 2 || n % 2 == 0) return 0;
	else {
		for (int i = 3; i <= sqrt(n); ++i) {
			if (n % i == 0) return 0;
		}
		return 1;
	}
}

int LargestNum(int n) {
	int temp = 0, num = 0;
	while (n > 0)
	{
		num = n % 10;
		if (temp < num)
			temp = num;
		n /= 10;
	}
	return temp;
}

int gcd(int a, int b) {
	int ucln;
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	ucln = a;
	return ucln;
}

bool AllEvenNum(int n) {
	int num;
	while (n > 0)
	{
		num = n % 10;
		if (num % 2 != 0)
			return 0;
		n /= 10;
	}
	return 1;
}

void Factorization(int& n, int& divisor, int& counter) {
	if (n == 1) {
		return;
	}
	else while(n % divisor == 0) {
		++counter;
		n /= divisor;
	}
	return;
}

int NearestPrime(int n) {
	if (Prime(n)) return n;
	else {
		int right, left;
		right = n + 1;
		left = n - 1;
		while (1) {
			if (Prime(left)) return left;
			else (Prime(--left));
			if (Prime(right)) return right;
			else (Prime(++right));
		}
	}
}
