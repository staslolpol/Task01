#include <iostream>
#include <string>

using namespace std;
class Student {
public:
	int id;
	string name;
	int age;
	double* marks;
	int class_number;
	char class_letter;
	bool alive;

	
		Student() {
			//cout << "Student default constructor......." << endl;
			id = 0;
			name = "";
			age = 0;
			marks = new double[3] {10, 4, 6};
			class_letter = '\0';
			class_number = 0;
			alive = 0;

		}

		//canonical constructor
		Student(int i, string nm, int ag, int number, char letter, double mrk, bool a) {
			cout << "Canon. constructor... \n";
			id = i;
			name = nm;
			age = ag;
			class_number = number;
			class_letter = letter;
			marks = new double[3] {10, 4, 6};
			alive = a;
		}
		Student(string nm, int ag) {
			cout << "Student with 2 arg";
			id = 0;
			name = nm;
			age = ag;
			class_number = 0;
			class_letter = '\0';
			marks = new double[3] {10, 4, 6};
			alive = true;
		}

		Student(const Student& student) {
			//cout << "Copy constract \n";
			id = student.id;
			name = student.name;
			age = student.age;
			class_number = student.class_number;
			class_letter = student.class_letter;
			marks = new double[3] {student.marks[0],
				student.marks[1],
				student.marks[2]};
			alive = student.alive;
		}

		~Student() {
			cout << "Student destractor..." << endl;
			if (marks != NULL) {
				delete[] marks;
			}
		}

	string toString() {
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
};