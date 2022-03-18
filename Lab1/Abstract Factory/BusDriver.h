#pragma once

#include "Driver.h"
enum class DrivingLicense;

class BusDriver : public Driver {
	BusDriver();
	BusDriver(const BusDriver&);
	BusDriver& operator=(const BusDriver&) = delete;
public:
	BusDriver& GetBusDriver();
};