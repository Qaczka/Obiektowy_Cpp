#include <iostream>
#include "Vehicle_friend.h"

using namespace std;

void Vehicle_friend::set_friend(Vehicle &veh, string name)
{
	veh.name = name;
}

