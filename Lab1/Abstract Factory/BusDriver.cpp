#include "BusDriver.h"
#include "DrivingLicense.h"

BusDriver::BusDriver() {}

BusDriver& BusDriver::GetBusDriver() {
	static BusDriver busDriver;
	busDriver.License = DrivingLicense::C;
	return busDriver;
}