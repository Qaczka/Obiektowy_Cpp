#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(string name)
{
	this->name = name;
}

void Animal::set_name(std::string name)
{
	this->name = name;
}

string Animal::get_name()
{
	return this->name;
}