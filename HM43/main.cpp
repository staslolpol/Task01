#include "logic.h"

int main() {
	int array[]{ 1,2,3,4,5,7,7,8,9,10,11,12 };

	bool result = is_unique_array(array, DEFAULT_SIZE);

	string msg = "Array is ";
	msg += result ? "unique " : "not unique ";

	cout << msg;

	return 0;
}