#pragma once
#include "ServiceClass.h"
#include "Component.h"
#include "Position.h"

class Person:public Component {
	int luggageWeight=0;
	double extraPayment=0;
	int EconomyWeightRestriction=20;
	int BusinessWeightRestriction=35;
	ServiceClass serviceClass = ServiceClass::Economy;
	Position position = Position::Passenger;
public:
	Person();
	Person(const Component& person);
	Person(const Position& _position);
	Person(const Position& _position,const int& _luggageWeight, const ServiceClass& _serviceClass);
	virtual int GetLuggageWeight() const override;
	virtual Position GetPosition() const override{ return position; };
	virtual ServiceClass GetServiceClass() const override { return serviceClass; };
};