#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transport
{
protected:
	int tank;

public:
	Transport() : tank(0) {
	}

	Transport(int tank){
		this->tank = (tank > 0 ? tank : 0);
	}

	int get_tank() {
		return tank;
	}

	void set_tank(int tank) {
		this->tank = tank > 0 ? tank : 0;
	}

	string toString() {
		return "Transport tank = " + to_string(tank);
	}
};

