#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Passenger_car.h"
#include "Bus.h"
#include "Plane.h"
#include "Ship.h"
#include "Manager.h"
using namespace std;

int main()
{
   Bus b;
Plane pl(15,1000, "Concord", 200);
b.print();
Manager John;
John.print(&pl);


    return 0;
}
