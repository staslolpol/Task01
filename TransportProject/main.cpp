#include"Bus.h"
#include"Truck.h"
#include"GasStation.h"


int main() {
	Bus* bus1 = new Bus(40);
	Bus* bus2 = new Bus(45);

	Truck* truck1 = new Truck(260);
	Truck* truck2 = new Truck(355);

	int size = 4;

	Transport** transports = new Transport * [size] {bus1, bus2,
		truck1, truck2};

	GasStation* station = new GasStation();

	int total = station->calculateTotalGas(transports, size);

	cout << total;

	delete bus1;
	delete bus2;
	delete truck1;
	delete truck2;

	delete[] transports;



	return 0;
}