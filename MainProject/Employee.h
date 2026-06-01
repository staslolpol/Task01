#pragma once
#include "Human.h"
class Employee : public Human{
private:
	int salary;
public: 
	Employee() {
		cout << "Defaut Employee constructor\n";
	}
	~Employee() {
		cout << "Destructor Employee constructor\n";

	}

};

