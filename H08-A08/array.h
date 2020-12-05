#pragma once
#include <string>
#ifndef array_H_
#define array_H_

// <19125106>
// <Huynh Tuan Luc>
// <19CTT1>

std::string inversed(std::string a);
// Test case 1
// Input: Hello World
// Output: dlroW ollhH

// Test case 2
// Input: abc
// Output: cba

// Test case 3
// Input: 123
// Output: 321

std::string inversed_word(std::string a);
// Test case 1
// Input: Hello World
// Output: World Hello

// Test case 2
// Input: Good Morning
// Output: Morning Good

// Test case 3
// Input: Nice to meet you
// Output: you meet to Nice

std::string name(std::string& a);
// Test case 1
// Input: nguyEn VAN a
// Output: Nguyen Van A

// Test case 2
// Input:      Le   vAn b
// Output: Le Van B

// Test case 3
// Input: ngUYEN thi C 
// Output: Nguyen Thi C

bool compare(std::string a, std::string b);
// Test case 1
// Input: Hello
//	      Hello
// Output: 1

// Test case 2
// Input: Hello
//	      Hellu
// Output: 0

// Test case 3
// Input: Hello World
//	      Hello
// Output: 0

bool find(std::string a, std::string b);
// Test case 1
// Input: Cong nghe Thong tin
//	      Thong
// Output: 1

// Test case 2
// Input: Cong nghe Thong tin
//	      Toan
// Output: 0

// Test case 3
// Input: Cong nghe Thong tin
//	       ti
// Output: 1

void find_odd_even(int a[], int size, int& odd, int& even);
// Test case 1
// Input: 5
//	      2 6 3 8 5
// Output: 8 3

// Test case 2
// Input: 5
//	      2 4 6 8 9
// Output: 8 9

// Test case 3
// Input: 3
//	      1 2 3
// Output: 2 1

double average_even(int a[], int size);
// Test case 1
// Input: 5
//	      2 6 3 8 5
// Output: 8 3

// Test case 2
// Input: 5
//	      2 4 6 8 9
// Output: 8 9

// Test case 3
// Input: 3
//	      1 2 3
// Output: 2 1

bool prime(int n);
// Test case 1
// Input: 5
//	      2 6 1 8 7
// Output: 2
//		   2 7

// Test case 2
// Input: 5
//	      1 2 3 4 5
// Output: 3
//		   2 3 5

// Test case 3
// Input: 3
//	      10 11 12
// Output: 1
//		   11

void sort_even(int(&a)[100], int size);
// Test case 1
// Input: 5
//	      2 6 1 4 7
// Output: 2 4 1 6 7

// Test case 2
// Input: 5
//	      8 6 4 2 1
// Output: 2 4 6 8 1

// Test case 3
// Input: 5
//	      1 2 3 8 6
// Output: 1 2 3 6 8

int check_order(int a[], int size);
// Test case 1
// Input: 5
//	      2 6 1 4 7
// Output: Khong tang khong giam

// Test case 2
// Input: 5
//	      1 2 3 4 5
// Output: Tang

// Test case 3
// Input: 5
//	      5 4 3 2 1
// Output: Giam

void count_unique(int a[], int size, int& counter);
// Test case 1
// Input: 5
//	      1 2 1 2 1
// Output: 2

// Test case 2
// Input: 8
//	      3 5 12 5 45 87 678 5
// Output: 6

// Test case 3
// Input: 6
//	      1 1 2 2 3 3
// Output: 3

int secondmax(int a[], int size);
// Test case 1
// Input: 5
//	      1 2 3 4 5
// Output: 4

// Test case 2
// Input: 8
//	      3 5 12 5 45 87 678 5
// Output: 87

// Test case 3
// Input: 5
//	      5 3 6 7 8
// Output: 7

#endif