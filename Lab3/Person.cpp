#include "Person.h"
#include <iostream>

Person::Person() {
	position = Position::Passenger;
	int randomServiceClass = rand() % 3;
	switch (randomServiceClass)
	{
	case 0:
		serviceClass = ServiceClass::Economy;
		break;
	case 1:
		serviceClass = ServiceClass::Business;
		break;
	case 2:
		serviceClass = ServiceClass::First;
		break;
	}
	luggageWeight = rand() % 55 + 6;
	if (luggageWeight > EconomyWeightRestriction && serviceClass == ServiceClass::Economy) {
		extraPayment = (luggageWeight - EconomyWeightRestriction) * 0.8;
	}
	else if (luggageWeight > BusinessWeightRestriction && serviceClass == ServiceClass::Business) {
		extraPayment = (luggageWeight - BusinessWeightRestriction) * 0.6;
	}
}

Person::Person(const Component& person) {
	luggageWeight = person.GetLuggageWeight();
	serviceClass = person.GetServiceClass();
	position = person.GetPosition();
}

Person::Person(const Position& _position) {
	if (_position != Position::Passenger) {
		position = _position;
		serviceClass = ServiceClass::None;
	}
}

Person::Person(const Position& _position, const int& _luggageWeight, const ServiceClass& _serviceClass) {
	position = _position;
	luggageWeight = _luggageWeight;
	serviceClass = _serviceClass;
	if (luggageWeight > EconomyWeightRestriction && serviceClass == ServiceClass::Economy) {
		extraPayment = (luggageWeight - EconomyWeightRestriction) * 0.8;
	}
	else if (luggageWeight > BusinessWeightRestriction && serviceClass == ServiceClass::Business) {
		extraPayment = (luggageWeight - BusinessWeightRestriction) * 0.6;
	}
}

int Person::GetLuggageWeight() const {
	return luggageWeight;
}