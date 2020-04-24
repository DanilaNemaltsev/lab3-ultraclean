#include "Vehicle.h"

Vehicle::Vehicle():Vehicle(0,0){}

Vehicle::Vehicle(int number_of_seats, int speed)
{
   if (number_of_seats>0){this->number_of_seats = number_of_seats;}
   if (speed>0){this->speed = speed;}
}

Vehicle::Vehicle(Vehicle &v):Vehicle(v.number_of_seats,v.speed){}
Vehicle::~Vehicle(){}

void Vehicle::set_speed(int speed)
{
 if (speed>0){this->speed = speed;}
}

void Vehicle::set_number_of_seats(int number_of_seats)
{
 if (number_of_seats>0){this->number_of_seats = number_of_seats;}
}

int Vehicle :: get_number_of_seats(int number_of_seats) const
{
    return number_of_seats;
}

int Vehicle :: get_speed(int speed) const
{
    return speed;
}

Vehicle&Vehicle::operator=(Vehicle &v)
{
    this-> number_of_seats = v.number_of_seats;
    this-> speed = v.speed;
    return *this;
}
