#pragma once
#include "Component.h"
#include <memory>
#include <vector>

class AirPlane: public Component{
private:
	std::vector<std::shared_ptr<Component>> PassengersAndCrew;
	int PilotsAmount = 0;
	int StewardessAmount = 0;
	int EconomyClassAmount = 0;
	int FirstClassAmount = 0;
	int BusinessClassAmount = 0;
	int TakenLuggageWeight = 0;
public:
	virtual int GetLuggageWeight() const override;
	virtual void AddPerson(const Component& Person);
	virtual void RemovePerson(const Component& Person);
};