#pragma once
#include "Vehicle.h"
#include <memory>

class VehicleBuilder {
protected:
	std::shared_ptr<Vehicle> vehicle;
public:
	virtual void CreateVehicle()=0;
	virtual void BuildDriver() {};
	virtual void BuildPassengers() {};
	virtual void SetVehicleType() {};
	virtual std::shared_ptr<Vehicle> GetVehicle() { return vehicle; };
};