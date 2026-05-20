#include "Student.h"


int main() {
	/*int number{ 100 };

	cout << "Number = " << number << endl;

	int* array = new int[3] {1};

	cout << array[0] << ", " << array[1] << ", " << array[2];

	delete[] array;*/

	Student alex{10, "Alex", 14, 9, 'A', 1, 1};

	cout << alex.toString() << endl;


	return 0;
}