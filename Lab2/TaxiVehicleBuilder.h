#pragma once
#include "VehicleBuilder.h"
#include <memory>
#include "VehicleType.h"

class TaxiVehicleBuilder :public VehicleBuilder {
public:
	virtual void CreateVehicle();
	virtual void BuildDriver();
	virtual void BuildPassengers();
	virtual void SetVehicleType();
	virtual std::shared_ptr<Vehicle> GetVehicle();
};