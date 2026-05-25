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
	Student(int i, string nm, int ag, int number, char letter, int mrk, bool a);
	Student(string nm, int ag);
	Student(const Student& student);
	~Student();
	int getID();
	string getName();
	void setName(string nm);
	int getAge();
	void setAge(int a);
	int getClassNumber();
	void setClassNumber(int number);
	char getClassLetter();
	void setClassLetter(char letter);
	bool isAlive();
	bool setAlive(bool a);
	int* getMarks();
	void setMarks(int* ms, int c);
	int getCount();


	string toString();
};