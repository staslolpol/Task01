#include "Student.h"

Student::Student() {
	//cout << "Student default constructor......." << endl;
	id = 0;
	//name = "no name";
	//age = 0;
	marks = NULL;
	class_letter = '\0';
	class_number = 0;
	//alive = 1;
	count = 0;


}

//canonical constructor
Student::Student(int id, string name, int age, int number, char letter, int mark, bool alive)
	: Human(name, age, alive) {
	cout << "Canon. constructor... \n";
	this->id = id;

	class_number = number;
	class_letter = letter;
	marks = new int[3] {10, 4, 6};
	count = 3;
}
Student::Student(string name, int age) : Student(name, age) {

}

Student::Student(const Student& student) : Student(student.id, student.name, student.age
	, student.count, student.class_number, student.class_letter, student.alive) {
	//cout << "Copy constract \n";
	if (student.marks != NULL && student.count > 0) {
		count = student.count;

		marks = new int[count];

		for (int i = 0; i < count; i++)
		{
			marks[i] = student.marks[i];
		}
	}
}

Student::~Student() {
	cout << "Student destractor..." << endl;
	if (marks != NULL) {
		delete[] marks;
	}
}

int Student::getID() {
	return id;
}





int Student::getClassNumber() {
	return class_number;
}

void Student::setClassNumber(int number) {
	if (number >= 1 && number <= 11) {
		class_number = number;
	}
}

char Student::getClassLetter() {
	return class_letter;
}

void Student::setClassLetter(char letter) {
	letter = toupper(letter);

	if (letter >= 'A' && letter >= 'Z') {
		class_letter = letter;
	}
}



int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int c) {
	if (marks != nullptr) {
		delete[] marks;
		marks = new int[c];

		for (int i = 0; i < c; i++)
		{
			marks[i] = marks[i];
		}
		count = c;
	}
}

int Student::getCount() {
	return count;
}
string Student::toString() {
	string s = "Student: ";
	s += name;
	//s += " [ " + to_string(id) + "]";
	s += ", agee = " + to_string(age);
	//s += ", class  =" + to_string(class_number) + to_string(class_letter);
	s += ", marks = ";
	/*for (int i = 0; i < count; i++)
	{
		s += " " + to_string(marks[i]);
	}*/
	s += ", alive = ";
	s += (alive ? "yes" : "no");
	return s;
}