#pragma once
#include <memory>
#include <vector>
#include "Driver.h"
#include "Passenger.h"
#include <string>
#include "VehicleType.h"

class Vehicle {
public:
	int PassengersLimit;
	bool babySeat = false;
	std::shared_ptr<Driver> driver;
	std::vector<std::shared_ptr<Passenger>> passengers;
	int Price;
	VehicleType vehicleType;
	std::string Info();
};