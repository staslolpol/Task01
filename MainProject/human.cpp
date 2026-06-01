#include "Human.h"

Human::Human() : Human("no name", 0, true) {
	cout << "Human defaut constructor\n";
}
Human::Human(string name, int age, bool alive) {
	cout << "Human constructor with arg\n";
	this->name = name;
	this->age = (age > 0 ? age : 0);
	this->alive = alive;

}
Human::Human(const Human& human) : Human(human.name, human.age, human.alive) {
	cout << "Human copy constructor\n";

}

Human::~Human() {
	cout << "Human sestructor\n";

}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int a) {
	if (age > 10) {
		age = a;
	}

bool Human::isAlive() {
		return alive;
	}

void Human::setAlive(bool a) {
		this->alive = alive;
	}

string Human::toString() {
	string s = "Student: ";
	s += name;
	s += ", agee = " + to_string(age);
	s += ", alive = ";
	s += (alive ? "yes" : "no");
	return s;
}
}