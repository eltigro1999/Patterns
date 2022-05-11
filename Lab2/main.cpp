#include <iostream>
#include "Director.h"
#include "BusVehicleBuilder.h"
#include "TaxiVehicleBuilder.h"
#include "Vehicle.h"

int main() {
	srand(time(0));
	Director dir;
	BusVehicleBuilder busBuilder;
	TaxiVehicleBuilder taxiBuilder;
	std::shared_ptr<Vehicle> bus = dir.CreateVehicle(busBuilder);
	std::shared_ptr<Vehicle> taxi = dir.CreateVehicle(taxiBuilder);
	std::cout << bus->Info() << std::endl;
	std::cout << taxi->Info()<<std::endl;
	return 0;
}