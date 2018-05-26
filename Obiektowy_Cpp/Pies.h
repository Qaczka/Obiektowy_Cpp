#pragma once
#include "Animal.h"


class Pies : public Animal {
public:
	Pies(std::string name);
	void make_noise();//bo polimorfizm
};