#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;

void inputDate(Date& a) {
	cout << "Date: ";
	cin >> a.day;
	cout << "Month: ";
	cin >> a.month;
	cout << "Year: ";
	cin >> a.year;
}
void saveDate(ofstream& f, Date& a) {
	f << a.day << " " << a.month << " " << a.year << endl;
}
void loadDate(ifstream& f, Date& a) {
	f >> a.day;
	f >> a.month;
	f >> a.year;
}
void printDate(Date& a) {
	cout << a.year << "-";
	if (a.month < 10) cout << "0" << a.month << "-";
	else cout << a.month << "-";
	if (a.day < 10) cout << "0" << a.day << endl;
	else cout << a.day << endl;
}
void printDateFormated(Date& a, int y, int m, int d) {
	std::string mon[13] = { "", "Jan", "Feb", "Mar", "Apr", "May","Jun", "Jul", "Aug", "Sep",
					"Oct", "Nov", "Dec" };
	if (y == 0) {
		string year = to_string(a.year);
		cout << year[year.length() - 2] << year[year.length() - 1] << "-";
	}
	else cout << a.year << "-";

	if (m == 0) cout << a.month << "-";
	else if (m == 1) {
		if (a.month < 10) cout << "0" << a.month << "-";
		else cout << a.month << "-";
	}
	else cout << mon[a.month] << "-";

	if (d == 0) cout << a.day << endl;
	else {
		if (a.day < 10) cout << "0" << a.day << endl;
		else cout << a.day << endl;
	}
}
bool compare(Date& a, Date& b) {
	if (a.day == b.day && a.month == b.month && a.year == b.year) return 1;
	else return 0;
}
void tomorrow(Date& a) {
	string day = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	bool check = 0;
	if (a.month == 2 && a.year % 4 == 0 && (a.year % 4 == 0 || a.year % 100 != 0)) {
		check = 1;
	}
	if (check == 1) {
		if (a.day == day[a.month]) ++a.day;
	}
	else if (a.day == day[a.month]) a.day = 1;
	else ++a.day;
}

void inputStudent(Student& s) {
	cout << "Please input the student's id: " << endl;
	cin >> s.id;
	cout << "Please input the student's full name: " << endl;
	cin.ignore();
	getline(cin, s.name);
	cout << "Please input the student's gpa: " << endl;
	cin >> s.gpa;
	cout << "Please input the student's address: " << endl;
	cin.ignore();
	getline(cin, s.address);
	cout << "Please input the student's dob: " << endl;
	cout << "Date: ";
	cin >> s.dob.day;
	cout << "Month: ";
	cin >> s.dob.month;
	cout << "Year: ";
	cin >> s.dob.year;
}
void saveStudent(ofstream& f, Student& s) {
	f << "ID: " << s.id << endl;
	f << "Full name: " << s.name << endl;
	f << "GPA: " << s.gpa << endl;
	f << "Address: " << s.address << endl;
	f << "Date of birth: " << s.dob.day << "-" << s.dob.month << "-" << s.dob.year << endl;
}