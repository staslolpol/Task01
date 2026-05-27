#include <iostream>
#include <string>

using namespace std;
class Student {
private:

	int id;
	string name;
	int age;
	int* marks;
	int count;
	int class_number;
	char class_letter;
	bool alive;

public:

	Student();

	//canonical constructor
	Student(int i, string name, int age, int number, char letter, int mark, bool a);
	Student(string name, int age);
	Student(const Student& student);
	~Student();
	int getID();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int a);
	int getClassNumber();
	void setClassNumber(int number);
	char getClassLetter();
	void setClassLetter(char letter);
	bool isAlive();
	void setAlive(bool a);
	int* getMarks();
	void setMarks(int* mark, int c);
	int getCount();


	string toString();
};