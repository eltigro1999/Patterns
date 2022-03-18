#pragma once
#include "Driver.h"
enum class DrivingLicense;

class TaxiDriver: public Driver {
	TaxiDriver();
	TaxiDriver(const TaxiDriver&);
	TaxiDriver& operator=(const TaxiDriver&) = delete;
public:
	TaxiDriver& GetTaxiDriver();	
};