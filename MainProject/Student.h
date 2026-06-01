#pragma once
#include "Human.h"

using namespace std;
class Student : public Human{
private:

	int id;
	int* marks;
	int count;
	int class_number;
	char class_letter;

public:

	Student();

	//canonical constructor
	Student(int id, string name, int age, int number, char letter, int mark, bool alive);
	Student(string name, int age);
	//Student(const Student& student);
	~Student();


	int getID();
	int getClassNumber();
	void setClassNumber(int number);
	char getClassLetter();
	void setClassLetter(char letter);
	
	int* getMarks();
	void setMarks(int* mark, int c);
	int getCount();


	string toString();
};