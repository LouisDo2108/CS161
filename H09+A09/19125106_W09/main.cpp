#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Header.h"

using namespace std;

int main()
{
	Date a, b;
	ofstream fo;
	ifstream fi;
	char fname[100];

	cout << "1.Input a date + 2.Output a date(yyyy-MM-dd)." << endl;
	inputDate(a);
	printDate(a);

	cout << "\n3. Output a date with a given input." << endl;
	printDateFormated(a);

	cout << "\n4.Load a date from a text file" << endl;
	cout << "Please input the name of the txt file you want load." << endl;
	cout << "Make sure it is in the same folder as this project" << endl;
	cin.ignore(1000, '\n');
	cin.get(fname, 100, '\n');
	fi.open(fname);
	if (!fi.is_open())
	{
		cout << "Can not open file" << endl;
	}
	else
	{
		loadDate(fi, a);
		fi.close();
	}

	cout << "\n5.Save a date to another text file" << endl;
	cout << "Please input the name of the txt file you want to save to." << endl;
	cout << "Make sure it is in the same folder as this project or we would create it." << endl;
	cin.ignore(1000, '\n');
	cin.get(fname, 100, '\n');
	fo.open(fname);
	if (!fo.is_open())
	{
		cout << "Can not create file" << endl;
	}
	else
	{
		saveDate(fo, a);
		fo.close();
	}

	cout << "\n6. Compare 2 date" << endl;
	cout << "Please input the first date." << endl;
	inputDate(a);
	cout << "Please input the second date." << endl;
	inputDate(b);
	if (compare(a, b))
		cout << "Same dates." << endl;
	else
		cout << "Different dates." << endl;

	cout << "\n7. Find tomorrow" << endl;
	cout << "Please input a date to get the tomorrow date." << endl;
	inputDate(a);
	tomorrow(a);
	printDate(a);

	//////////////////////////////////////////////
	Student s, ss;

	cout << "\n15.Input a student. + 19. Save a student to a text file." << endl;
	inputStudent(s);
	cout << "Please input the name of the txt file you want to save to." << endl;
	cout << "Make sure it is in the same folder as this project or we would create it." << endl;
	cin.ignore(1000, '\n');
	cin.get(fname, 100, '\n');
	fo.open(fname);
	if (!fo.is_open())
	{
		cout << "Can not open file";
	}
	else
	{
		saveStudent(fo, s);
		fo.close();
	}

	cout << "\n16.Output a student" << endl;
	printStudent(s);

	cout << "\n18.Load a student from a text file." << endl;
	cout << "Please input the name of the txt file you want to load." << endl;
	cout << "Make sure it is in the same folder as this project." << endl;
	cin.ignore(1000, '\n');
	cin.get(fname, 100, '\n');
	fi.open(fname);
	if (!fi.is_open())
	{
		cout << "Can not open file." << endl;
	}
	else
	{
		loadStudent(fi, s);
		fi.close();
	}

	cout << "\n20. Extract class" << endl;
	extractClass(s);

	cout << "\n21. Compare students by id" << endl;
	cout << "Enter the first student's id: ";
	cin >> s.id;
	cout << "Enter the second student's id: ";
	cin >> ss.id;
	if (compareStudentID(s, ss))
		cout << "Same student IDs." << endl;
	else
		cout << "Different student IDs." << endl;

	cout << "\n22. Compare students by gpa and then by id." << endl;
	cout << "Enter the first student's id: ";
	cin >> s.id;
	cout << "Enter the first student's gpa: ";
	cin >> s.gpa;
	cout << "Enter the second student's id: ";
	cin >> ss.id;
	cout << "Enter the second student's gpa: ";
	cin >> ss.gpa;
	if (compareStudentGPA(s, ss))
		cout << "Same GPAs." << endl;
	else
		cout << "Different GPAs." << endl;
	if (compareStudentID(s, ss))
		cout << "Same student IDs" << endl;
	else
		cout << "Different student IDs." << endl;

	/////////////////////////////////////////////
	Course c;
	int n, index = 0;
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int month = 1 + ltm->tm_mon;
	int date = ltm->tm_mday;

	cout << "\n27. Load a course from text file." << endl;
	loadCourse(fi, c, n, index);

	cout << "\n28. Save a course to text file." << endl;
	saveCourse(fo, c, n, index);

	cout << "\n29. Add a student to a course, check the maximum number students condition." << endl;
	index = n;
	addStudent(fi, c, n, index);
	++index;
	if (index > c.max)
		cout << "The number of students is larger than maximum students." << endl;
	else
		cout << "The number of students is in range." << endl;

	cout << "\n30. Remove a student from a course, check the minimum number students condition." << endl;
	removeStudent(c, index);
	--index;
	if (index < c.min)
		cout << "The number of students is smaller than the minimum students." << endl;
	else
		cout << "The number of students is in range." << endl;

	cout << "\n31. Find all students who were born in this month and save to a text file." << endl;
	monthStudent(fo, c, month, index);

	cout << "\n32. Find all students who were born in this date and save to a text file." << endl;
	dateStudent(fo, c, date, index);
}