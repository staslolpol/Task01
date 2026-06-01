#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	
	string name;      //
	int age;
	bool alive;

public:
	

	Human();
	Human(string name, int age, bool alive);
	Human( const Human& human);

	~Human();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int a);
	bool isAlive();
	void setAlive(bool a);

	string toString();
};

