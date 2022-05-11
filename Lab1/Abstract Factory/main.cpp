#include "main.h"


int main() {
	srand(time(0));

	Taxi taxi;
	taxi.BoardPassenger();
	if (taxi.IsReadyToRide()) {
		taxi.Ride();
	}
	Bus bus;
	bus.BoardPassenger();
	if (bus.IsReadyToRide()) {
		bus.Ride();
	}
}

//TODO comment all the drivers
// Watch about Abstract Factory
// Remove singletones from all the drivers and implement them without singletone