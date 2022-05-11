#include "Vehicle.h"


std::string Vehicle::Info() {
	std::string Information;
	Information += "Type: ";
	switch (vehicleType) {
	case VehicleType::Bus:
		Information += "Bus\n";
		break;
	case VehicleType::Taxi:
		Information += "Taxi\n";
	}
	Information += "Passengers limit: " + std::to_string(PassengersLimit)+"\n";
	Information += "Passengers: \n";
	for (int i = 0; i < PassengersLimit; ++i) {
		Information += std::to_string(i + 1) + ". ";
		if (passengers[i]->passengerRight == PassengerRight::Adult) Information += "Adult";
		else if (passengers[i]->passengerRight == PassengerRight::Preferential) Information += "Preferential";
		else Information += "Child";
		Information += "\n";
	}
	if (babySeat) {
		Information += "\nHas baby seat\n";
	}
	return Information;
}