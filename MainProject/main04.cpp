//#include "Manager.h"
//
//
//int main() {
//
//	Student* st1 = new Student("Alex", 15);
//	Student* st2 = new Student("Herry", 9);
//	Student* st3 = new Student("Peter", 13);
//
//	int* marks = new int[5] {10, 10, 8, 5, 7};
//	st1->setMarks(marks, 5);
//
//	marks = new int[3] {8, 5, 7};
//	st2->setMarks(marks, 5);
//
//	marks = new int[7] {10, 10, 8, 5, 7, 4, 7};
//	st3->setMarks(marks, 5);
//
//	Student** group = new Student * [3] {st1, st2, st3};
//
//	Manager* manager = new Manager();
//
//	double avg = manager->calculateAverageMark(group, 3);
//
//
//	return 0;
//}