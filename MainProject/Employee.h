#pragma once
#include "Human.h"
class Employee : public Human {
private:
	int salary;
public:
	Employee() {
		cout << "Defaut Employee constructor\n";
	}

	Employee(string name, int age, bool alive, int salary)
		: Human(name, age, alive) {
		cout << "Defaut Employee constructor\n";
		this->salary = salary;
	}
	~Employee() {
		cout << "Destructor Employee constructor\n";

	}

};

