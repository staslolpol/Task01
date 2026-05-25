#include "Student.h"

	Student::Student() {
		//cout << "Student default constructor......." << endl;
		id = 0;
		name = "";
		age = 0;
		marks = new int[3] {10, 4, 6};
		class_letter = '\0';
		class_number = 0;
		alive = 0;
		count = 0;


	}

	//canonical constructor
	Student::Student(int i, string nm, int ag, int number, char letter, int mrk, bool a) {
		cout << "Canon. constructor... \n";
		id = i;
		name = nm;
		age = ag;
		class_number = number;
		class_letter = letter;
		marks = new int[3] {10, 4, 6};
		count = 3;
		alive = a;
	}
	Student::Student(string nm, int ag) {
		cout << "Student with 2 arg";
		count = 3;
		id = 0;
		name = nm;
		age = ag;
		class_number = 0;
		class_letter = '\0';
		marks = new int[3] {10, 4, 6};
		alive = true;
	}

	Student::Student(const Student& student) {
		//cout << "Copy constract \n";
		count = student.count;
		id = student.id;
		name = student.name;
		age = student.age;
		class_number = student.class_number;
		class_letter = student.class_letter;
		marks = new int[3] {student.marks[0],
			student.marks[1],
			student.marks[2]};
		alive = student.alive;
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



	string Student::getName() {
		return name;
	}

	void Student::setName(string nm) {
		name = nm;
	}

	int Student::getAge() {
		return age;
	}

	void Student::setAge(int a) {
		if (age > 10) {
			age = a;
		}
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

	bool Student::isAlive() {
		return alive;
	}

	bool Student::setAlive(bool a) {
		alive = a;
	}

	int* Student::getMarks() {
		return marks;
	}

	void Student::setMarks(int* ms, int c) {
		if (marks != nullptr) {
			delete[] marks;
			marks = new int[c];

			for (int i = 0; i < c; i++)
			{
				marks[i] = ms[i];
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
		s += " [ " + to_string(id) + "]";
		s += ", age = " + to_string(age);
		s += ", class  =" + to_string(class_number) + to_string(class_letter);
		s += ", marks = " + to_string(marks[0]) + ", "
			+ to_string(marks[1]) + ", "
			+ to_string(marks[2]);
		s += ", alive = ";
		s += (alive ? "yes" : "no");
		return s;
	}