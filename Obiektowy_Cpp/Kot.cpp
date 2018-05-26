#include <iostream>
#include "Kot.h"

using namespace std;

Kot::Kot(string name) :Animal(name) {}

void Kot::make_noise() {
	cout << "Miauuuu!" << endl;
}