#pragma once
#ifndef fucntion_H_
#define fucntion_H_

// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

int solveQuadratic(double a, double b, double c, double& x1, double& x2, double& x, bool& check);
// Test case 1
// Input: 2 -7 5
// Output: x1 = 1.00, x2 = 2.50

// Test case 2
// Input: 0 -2 2
// Output: x = 1

// Test case 3
// Input: 0 0 0
// Output: All real numbers.

void tomorrow(int& date, int& month, int& year);
// Test case 1
// Input: 1 10 2019
// Output: 2 10 2019

// Test case 2
// Input: 31 10 2019
// Output: 1 11 2019

// Test case 3
// Input: 31 12 2019
// Output: 1 1 2020

void yesterday(int& date, int& month, int& year);
// Test case 1
// Input: 2 10 2019
// Output: 1 10 2019

// Test case 2
// Input: 1 11 2019
// Output: 31 10 2019

// Test case 3
// Input: 1 1 2020
// Output: 31 12 2019

bool PerfectNumber(int n);
// Test case 1
// Input: 6
// Output: YES

// Test case 2
// Input: 28
// Output: YES

// Test case 3
// Input: 100
// Output: NO

bool Prime(int n);
// Test case 1
// Input: 7
// Output: YES

// Test case 2
// Input: 2
// Output: YES

// Test case 3
// Input: 21
// Output: NO

int LargestNum(int n);
// Test case 1
// Input: 25837283
// Output: 8

// Test case 2
// Input: 2468
// Output: 8

// Test case 3
// Input: 111
// Output: 1

bool AllEvenNum(int n);
// Test case 1
// Input: 246
// Output: YES

// Test case 2
// Input: 135
// Output: NO

// Test case 3
// Input: 2469
// Output: NO

int gcd(int a, int b);
// Test case 1
// Input: 20 12
// Output: 4

// Test case 2
// Input: 21 8
// Output: 1

// Test case 3
// Input: 864 96
// Output: 96

void Factorization(int& n, int& divisor, int& counter);
// Test case 1
// Input: 14
// Output: 2 7

// Test case 2
// Input: 45
// Output: 3 3 5

// Test case 3
// Input: 15
// Output: 3 5

int NearestPrime(int n);
// Test case 1
// Input: 11
// Output: 11

// Test case 2
// Input: 10
// Output: 11

// Test case 3
// Input: 4
// Output: 3

#endif