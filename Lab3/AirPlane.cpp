#include "AirPlane.h"
#include <iostream>
#include "Person.h"
#include <algorithm>

int AirPlane::GetLuggageWeight() const {
	int summaryWeight = 0;
	for (const auto& person : PassengersAndCrew) {
		summaryWeight+=person->GetLuggageWeight();
	}
	std::cout << "Taken luggage weight = " << TakenLuggageWeight << std::endl;
	return summaryWeight;
}

void AirPlane::AddPerson(const Component& person) {
	if (person.GetPosition() == Position::Passenger) {
		if (person.GetServiceClass() == ServiceClass::Economy && EconomyClassAmount < 150) {
			EconomyClassAmount++;
			PassengersAndCrew.push_back(std::make_shared<Person>(person));
		}
		else if (person.GetServiceClass() == ServiceClass::Economy && EconomyClassAmount >= 150) {
			TakenLuggageWeight += person.GetLuggageWeight();
		}
		else if (person.GetServiceClass() == ServiceClass::Business && EconomyClassAmount < 20) {
			BusinessClassAmount++;
			PassengersAndCrew.push_back(std::make_shared<Person>(person));
		}
		else if (person.GetServiceClass() == ServiceClass::First && EconomyClassAmount < 10) {
			FirstClassAmount++;
			PassengersAndCrew.push_back(std::make_shared<Person>(person));
		}
	}
	else if (person.GetPosition() == Position::Pilot && PilotsAmount < 2) {
		PilotsAmount++;
		PassengersAndCrew.push_back(std::make_shared<Person>(person));
	}
	else if (person.GetPosition() == Position::Stewardess && StewardessAmount < 6) {
		StewardessAmount++;
		PassengersAndCrew.push_back(std::make_shared<Person>(person));
	}
}

void AirPlane::RemovePerson(const Component& person) {
	std::shared_ptr<Component> _person = std::make_shared<Person>(person);
	PassengersAndCrew.erase(std::remove(PassengersAndCrew.begin(), PassengersAndCrew.end(), _person),PassengersAndCrew.end());
}
