#pragma once
#include "Animal.h"


class Kot : public Animal {
public:
	Kot(std::string name);
	void make_noise();//bo polimorfizm
};