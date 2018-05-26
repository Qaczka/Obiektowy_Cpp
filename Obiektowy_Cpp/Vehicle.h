#pragma once
#include <string>

class Vehicle {
private:
	std::string name;

public:
	Vehicle(std::string name);
	void set_name(std::string name);
	std::string get_name();
	//virtual void make_noise() = 0;
	friend class Vehicle_friend;
	friend void change_to_friend(Vehicle &veh);
};