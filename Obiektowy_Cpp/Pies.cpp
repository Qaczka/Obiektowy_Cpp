#include <iostream>
#include "Pies.h"

using namespace std;

Pies::Pies(string name) :Animal(name) {}

void Pies::make_noise() {
	cout << "Hau hau!" << endl;
}