#pragma once
#include <string>

class Animal {
private:
	std::string name;

public:
	Animal(std::string name);
	void set_name(std::string name);
	std::string get_name();
	virtual void make_noise()=0;
};