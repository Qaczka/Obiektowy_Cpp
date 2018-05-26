#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string name)
{
	this->name = name;
}

void Vehicle::set_name(std::string name)
{
	this->name = name;
}

string Vehicle::get_name()
{
	return this->name;
}

//Ta funkcja do nikogo nie nalezy ale jest friendem vehicle
void change_to_friend(Vehicle &veh) {
	veh.name = "Friend's car";
}