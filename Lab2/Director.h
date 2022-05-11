#pragma once
#include <memory>
#include "Vehicle.h"
#include "VehicleBuilder.h"

class Director {
public:
	std::shared_ptr<Vehicle> CreateVehicle(VehicleBuilder&);
};