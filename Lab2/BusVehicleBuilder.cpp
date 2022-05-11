#include "BusVehicleBuilder.h"
#include "LicensePlate.h"
#include "PassengerRight.h"

void BusVehicleBuilder::CreateVehicle() {
	vehicle = std::make_shared<Vehicle>();
}

void BusVehicleBuilder::BuildDriver() {
	vehicle->driver = std::make_shared<Driver>();
	vehicle->driver->licensePlate = LicensePlate::D;
}

void BusVehicleBuilder::BuildPassengers() {
	vehicle->PassengersLimit = 30;
	for (int i = 0; i < vehicle->PassengersLimit; ++i) {
		std::shared_ptr<Passenger> newPassanger = std::make_shared<Passenger>();
		int randomNum = rand() % 3;
		switch (randomNum) {
			case 0: 
				newPassanger->passengerRight = PassengerRight::Adult;
				break;
			case 1:
				newPassanger->passengerRight = PassengerRight::Preferential;
				break;
			case 2:
				newPassanger->passengerRight = PassengerRight::Child;
				break;
		}
		vehicle->passengers.push_back(newPassanger);
	}
	vehicle->babySeat = false;
}

void BusVehicleBuilder::SetVehicleType() {
	vehicle->vehicleType = VehicleType::Bus;
}

std::shared_ptr<Vehicle> BusVehicleBuilder::GetVehicle() {
	return vehicle;
}