#include <iostream>
#include "AirPlane.h"
#include "Person.h"
#include "Position.h"

int main() {
	//srand(time(0));
	AirPlane plane;
	Person person;
	for (int i = 0; i < 750; ++i) {
		Person person;
		plane.AddPerson(person);
	}
	plane.AddPerson(Person(Position::Pilot));
	plane.AddPerson(Person(Position::Pilot));
	plane.AddPerson(Person(Position::Pilot));
	plane.AddPerson(Person(Position::Stewardess));
	plane.AddPerson(Person(Position::Stewardess));
	plane.AddPerson(Person(Position::Stewardess));
	plane.AddPerson(Person(Position::Stewardess));
	plane.AddPerson(Person(Position::Stewardess));
	plane.AddPerson(Person(Position::Stewardess));
	plane.AddPerson(Person(Position::Stewardess));
	std::cout<<"Final weight: "<<plane.GetLuggageWeight()<<std::endl;
}