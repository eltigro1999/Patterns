#pragma once
#include "Position.h"
#include "ServiceClass.h"

class Component{
public:
	virtual int GetLuggageWeight() const = 0;
	virtual Position GetPosition() const{ return Position::Passenger;};
	virtual ServiceClass GetServiceClass() const { return ServiceClass::Economy; };
};