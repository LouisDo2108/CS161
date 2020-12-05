#include <fstream>
using namespace std;

#pragma once
#ifndef Header_H_
#define Header_H_

struct Date
{
	int day, month, year;
};
void inputDate(Date &a);
void saveDate(ofstream &f, Date &a);
void printDateFormated(Date &a);
void loadDate(ifstream &f, Date &a);
void printDate(Date &a);
bool compare(Date &a, Date &b);
void tomorrow(Date &a);

struct Student
{
	double gpa;
	string id, name, address;
	Date dob;
};
void inputStudent(Student &s);
void inputMultiStudent(Student s[], int &n, int &index);
void saveStudent(ofstream &f, Student &s);
void saveMultiStudent(ofstream &f, Student s[], int &n, int &index);
void printStudent(Student &s);
void loadStudent(ifstream &f, Student &s);
void loadMultiStudent(ifstream &f, Student s[], int &n, int &index);
void extractClass(Student &s);
bool compareStudentID(Student &s, Student &ss);
bool compareStudentGPA(Student &s, Student &ss);

struct Course
{
	string course_id, course_name;
	bool status;
	Student Students[100];
	int min, max;
};
void loadCourse(ifstream &f, Course &c, int &n, int &index);
void saveCourse(ofstream &f, Course &c, int &n, int &index);
void addStudent(ifstream &f, Course &c, int &n, int &index);
void removeStudent(Course &c, int &index);
void monthStudent(ofstream &f, Course &c, int month, int &index);
void dateStudent(ofstream &f, Course &c, int date, int &index);

#endif