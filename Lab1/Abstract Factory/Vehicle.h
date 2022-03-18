#pragma once
#include <vector>
#include "Passenger.h"
#include <memory>

class Vehicle {
protected:
	bool Rides = false;
	std::vector<std::shared_ptr<Passenger>> Passengers;
	int PassengersLimit=0;
public:
	//Driver driver
	// std::vector
	virtual void BoardPassenger();
	bool IsReadyToRide();
	void Ride();
	virtual ~Vehicle()=0;

};