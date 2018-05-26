#pragma once
#include <string>
#include "Vehicle.h"

class Vehicle_friend {

public:
	void set_friend(Vehicle &veh, std::string name);
};