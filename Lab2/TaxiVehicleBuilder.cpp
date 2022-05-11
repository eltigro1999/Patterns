#include "TaxiVehicleBuilder.h"
#include "LicensePlate.h"
#include "PassengerRight.h"

void TaxiVehicleBuilder::CreateVehicle() {
	vehicle = std::make_shared<Vehicle>();
}

void TaxiVehicleBuilder::BuildDriver() {
	vehicle->driver = std::make_shared<Driver>();
	vehicle->driver->licensePlate = LicensePlate::B;
}

void TaxiVehicleBuilder::BuildPassengers() {
	vehicle->PassengersLimit = 4;
	for (int i = 0; i < vehicle->PassengersLimit; ++i) {
		std::shared_ptr<Passenger> newPassanger = std::make_shared<Passenger>();
		int randomNum = rand() % 2;
		switch (randomNum) {
		case 0:
			newPassanger->passengerRight = PassengerRight::Adult;
			break;
		case 1:
			newPassanger->passengerRight = PassengerRight::Child;
			break;
		}
		vehicle->passengers.push_back(newPassanger);
	}
	vehicle->babySeat = true;
}

void TaxiVehicleBuilder::SetVehicleType() {
	vehicle->vehicleType = VehicleType::Taxi;
}

std::shared_ptr<Vehicle> TaxiVehicleBuilder::GetVehicle() {
	return vehicle;
}