#include "TaxiDriver.h"
#include "DrivingLicense.h"

TaxiDriver::TaxiDriver() {}

TaxiDriver& TaxiDriver::GetTaxiDriver() {
	static TaxiDriver taxiDriver;
	taxiDriver.License = DrivingLicense::B;
	return taxiDriver;
}