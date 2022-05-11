#include "Vehicle.h"
#include <cstdlib>
#include <iostream>


bool Vehicle::IsReadyToRide() {
	return Passengers.size() <= PassengersLimit;
}

void Vehicle::BoardPassenger() {
	int randomAmountOfPassengers = rand() % (PassengersLimit+1);
	for (int NumberOfPassenger = 0; NumberOfPassenger < randomAmountOfPassengers; ++NumberOfPassenger) {
		std::shared_ptr<Passenger> passenger(new Passenger);
		Passengers.push_back(std::move(passenger));
	}
	std::cout << Passengers.size() << std::endl;
}

void Vehicle::Ride() {
	Rides = true;
}

Vehicle::~Vehicle() {}