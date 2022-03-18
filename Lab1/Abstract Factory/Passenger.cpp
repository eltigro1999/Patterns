#include "Passenger.h"
#include <iostream>
std::string Passenger::GetName()
{
	return Name;
}

Passenger::~Passenger() {
	std::cout << "Deleted" << std::endl;
}