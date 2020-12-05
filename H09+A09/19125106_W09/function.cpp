#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;

void inputDate(Date &a)
{
	cout << "Date: ";
	cin >> a.day;
	cout << "Month: ";
	cin >> a.month;
	cout << "Year: ";
	cin >> a.year;
}
void saveDate(ofstream &f, Date &a)
{
	f << a.day << " " << a.month << " " << a.year << endl;
}
void loadDate(ifstream &f, Date &a)
{
	f >> a.day;
	f >> a.month;
	f >> a.year;
}
void printDate(Date &a)
{
	cout << a.year << "-";
	if (a.month < 10)
		cout << "0" << a.month << "-";
	else
		cout << a.month << "-";
	if (a.day < 10)
		cout << "0" << a.day << endl;
	else
		cout << a.day << endl;
}
void printDateFormated(Date &a)
{
	string input;
	int y, m, d;
	std::string mon[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep",
						   "Oct", "Nov", "Dec"};

	cout << "Please enter the year format(yy or yyyy): " << endl;
	cin >> input;
	if (input == "yy")
		y = 0;
	else
		y = 1;

	cout << "Please enter the month format(M or MM or MMM): " << endl;
	cin >> input;
	if (input == "M")
		m = 0;
	else if (input == "MM")
		m = 1;
	else
		m = 2;

	cout << "Please enter the day format(d or dd): " << endl;
	cin >> input;
	if (input == "d")
		d = 0;
	else
		d = 1;

	if (y == 0)
	{
		string year = to_string(a.year);
		cout << year[year.length() - 2] << year[year.length() - 1] << "-";
	}
	else
		cout << a.year << "-";

	if (m == 0)
		cout << a.month << "-";
	else if (m == 1)
	{
		if (a.month < 10)
			cout << "0" << a.month << "-";
		else
			cout << a.month << "-";
	}
	else
		cout << mon[a.month] << "-";

	if (d == 0)
		cout << a.day << endl;
	else
	{
		if (a.day < 10)
			cout << "0" << a.day << endl;
		else
			cout << a.day << endl;
	}
}
bool compare(Date &a, Date &b)
{
	if (a.day == b.day && a.month == b.month && a.year == b.year)
		return 1;
	else
		return 0;
}
void tomorrow(Date &a)
{
	string day = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	bool check = 0;
	if (a.month == 2 && a.year % 4 == 0 && (a.year % 4 == 0 || a.year % 100 != 0))
	{
		check = 1;
	}
	if (check)
	{
		if (a.day == 28)
			++a.day;
		else if (a.day == 29)
		{
			++a.month;
			a.day = 1;
		}
	}
	else if (a.day == day[a.month])
	{
		if (a.month == 12)
		{
			a.month = 1;
			++a.year;
		}
		else
		{
			++a.month;
		}
		a.day = 1;
	}
	else
		++a.day;
}

void inputStudent(Student &s)
{
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
void inputMultiStudent(Student s[], int &n, int &index)
{
	cout << "How many student do you want to input?" << endl;
	cin >> n;
	for (int i = index; i < index + n; ++i)
	{
		inputStudent(s[i]);
	}
}
void saveStudent(ofstream &f, Student &s)
{
	f << s.id << endl;
	f << s.name << endl;
	f << s.gpa << endl;
	f << s.address << endl;
	f << s.dob.day << " " << s.dob.month << " " << s.dob.year << endl;
}
void saveMultiStudent(ofstream &f, Student s[], int &n, int &index)
{
	cout << "How many student do you want to save to the file?" << endl;
	cin >> n;
	for (int i = index; i < index + n; ++i)
	{
		saveStudent(f, s[i]);
	}
}
void printStudent(Student &s)
{
	cout << "ID: " << s.id << endl;
	cout << "Full name: " << s.name << endl;
	cout << "GPA: " << s.gpa << endl;
	cout << "Address: " << s.address << endl;
	cout << "Date of birth: " << s.dob.day << "-" << s.dob.month << "-" << s.dob.year << endl;
}
void loadStudent(ifstream &f, Student &s)
{
	f >> s.id;
	f.ignore();
	getline(f, s.name);
	f >> s.gpa;
	f.ignore();
	getline(f, s.address);
	f >> s.dob.day;
	f >> s.dob.month;
	f >> s.dob.year;
}
void loadMultiStudent(ifstream &f, Student s[], int &n, int &index)
{
	cout << "How many students do you want to load into the course?" << endl;
	cin >> n;
	for (int i = index; i < index + n; ++i)
	{
		loadStudent(f, s[i]);
	}
}
void extractClass(Student &s)
{
	cout << "You are in class K" << s.id[0] << s.id[1];
}
bool compareStudentID(Student &s, Student &ss)
{
	if (s.id.length() != ss.id.length())
		return 0;
	else
	{
		for (int i = 0; i < s.id.length(); ++i)
		{
			if (s.id[i] != ss.id[i])
				return 0;
		}
		return 1;
	}
}
bool compareStudentGPA(Student &s, Student &ss)
{
	if (s.gpa == ss.gpa)
		return 1;
	else
		return 0;
}

void loadCourse(ifstream &f, Course &c, int &n, int &index)
{
	char fname[100], cname[100];
	string temp;

	cout << "Please input the name of the course txt file you want to load." << endl;
	cout << "Make sure it is in the same folder as this project." << endl;
	cin.ignore(1000, '\n');
	cin.get(cname, 100, '\n');
	f.open(cname);
	if (!f.is_open())
	{
		cout << "Can not open file" << endl;
	}
	else
	{
		getline(f, c.course_id);
		getline(f, c.course_name);
		getline(f, temp);
		if (temp == "open")
			c.status = 1;
		else
			c.status = 0;
		f >> c.min;
		f >> c.max;
		f.close();
	}
	cout << "\nPlease input the name of the student txt file to load to course.txt." << endl;
	cout << "Make sure it is in the same folder as this project." << endl;
	cin.ignore(1000, '\n');
	cin.get(fname, 100, '\n');
	f.open(fname);
	if (!f.is_open())
	{
		cout << "Can not open file" << endl;
	}
	else
	{
		loadMultiStudent(f, c.Students, n, index);
		f.close();
	}
}
void saveCourse(ofstream &f, Course &c, int &n, int &index)
{
	char cname[100];
	cout << "Please input the txt file name you want to save to." << endl;
	cout << "Make sure it is in the same folder as this project." << endl;
	cin.ignore(1000, '\n');
	cin.get(cname, 100, '\n');
	f.open(cname);
	if (!f.is_open())
	{
		cout << "Can not open file" << endl;
	}
	else
	{
		f << c.course_id << endl;
		f << c.course_name << endl;
		f << c.status << endl;
		f << c.max << endl;
		f << c.min << endl;
		saveMultiStudent(f, c.Students, n, index);
		f.close();
	}
}
void addStudent(ifstream &f, Course &c, int &n, int &index)
{
	cout << "Enter 1 to add a student with standard input." << endl;
	cout << "Enter 2 to add a student from a text file" << endl;
	int in;
	cin >> in;
	switch (in)
	{
	case 1:
	{
		inputStudent(c.Students[index]);
		break;
	}

	case 2:
	{
		cout << "Please input the file name, make sure it is in the same folder as this project." << endl;
		char fname[100];
		cin.ignore(1000, '\n');
		cin.get(fname, 100, '\n');
		f.open(fname, ios::app);
		if (!f.is_open())
		{
			cout << "Can not open file" << endl;
		}
		else
		{
			loadStudent(f, c.Students[index]);
			f.close();
		}
		break;
	}
	}
	cout << "Added " << c.Students[index].id << endl;
}
void removeStudent(Course &c, int &index)
{
	string removeid;

	cout << "There are " << index << " student(s) in the course." << endl;
	cout << "Please enter the student id that you want to remove" << endl;
	cin >> removeid;
	for (int i = 0; i < index; ++i)
	{
		if (c.Students[i].id == removeid)
		{
			for (int k = i; k < index - 1; ++k)
			{
				c.Students[k] = c.Students[k + 1];
			}
			cout << "Removed " << removeid << endl;
			return;
		}
	}
	cout << "Couldn't find the id." << endl;
}
void monthStudent(ofstream &f, Course &c, int month, int &index)
{
	char mname[100];
	cout << "Please input the name of the txt file you want to save to." << endl;
	cout << "Make sure it is in the same folder as this project." << endl;
	cin.ignore(1000, '\n');
	cin.get(mname, 100, '\n');
	f.open(mname);
	if (!f.is_open())
	{
		cout << "Can not open file" << endl;
	}
	else
	{
		for (int i = 0; i < index; ++i)
		{
			if (c.Students[i].dob.month == month)
			{
				saveStudent(f, c.Students[i]);
			}
		}
		f.close();
	}
}
void dateStudent(ofstream &f, Course &c, int date, int &index)
{
	char dname[100];
	cout << "Please input the name of the txt file you want to save to." << endl;
	cout << "Make sure it is in the same folder as this project." << endl;
	cin.ignore(1000, '\n');
	cin.get(dname, 100, '\n');
	f.open(dname);
	if (!f.is_open())
	{
		cout << "Can not open file" << endl;
	}
	else
	{
		for (int i = 0; i < index; ++i)
		{
			if (c.Students[i].dob.day == date)
			{
				saveStudent(f, c.Students[i]);
				printStudent(c.Students[i]);
			}
		}
		f.close();
	}
}