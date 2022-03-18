#pragma once
enum class DrivingLicense;

class Driver {
protected:
	DrivingLicense License;
public:
	DrivingLicense GetDrivingLicense();
	virtual ~Driver() = 0;
};