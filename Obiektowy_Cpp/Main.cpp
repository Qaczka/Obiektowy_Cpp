#include <iostream>
#include "Animal.h"
#include "Kot.h"
#include "Pies.h"
#include "Vehicle.h"
#include "Vehicle_friend.h"

using namespace std;

int main(int argc, char* argv)
{
	Kot Cat("Kocur");
	Pies Dog("Spinter");

	cout << "Imie zwierzecia to: " << Cat.get_name() << endl;
	cout << "Imie zwierzecia to: " << Dog.get_name() << endl;

	Cat.make_noise();
	Dog.make_noise();

	Vehicle woz("Subaru");
	cout << "Vehicle przed: " << woz.get_name() << endl;
	Vehicle_friend zmieni;
	zmieni.set_friend(woz, "Opel");
	cout << "Vehicle po klasie friend: " << woz.get_name() << endl;
	change_to_friend(woz);
	cout << "Vehicle po funkcji friend: " << woz.get_name() << endl;


	system("PAUSE");
	return 0;
}