#include "Director.h"

std::shared_ptr<Vehicle> Director::CreateVehicle(VehicleBuilder& Builder) {
	Builder.CreateVehicle();
	Builder.BuildDriver();
	Builder.BuildPassengers();
	Builder.SetVehicleType();
	return Builder.GetVehicle();
}