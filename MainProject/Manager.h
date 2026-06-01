#pragma once
#include "Group.h"
#include "Employee.h"

class Manager
{
public:
	double calculateAverageMark(Group* group);

	Manager() {
		cout << "Defaut Manager constructor\n";
	}

	~Manager() {
		cout << "Destructor Manager constructor\n";

	}
};
