#include "Ship.h"

Ship::Ship():Ship(0,0,"brand",0){};

Ship::Ship(int number_of_seats, int speed, char *brand, int displacement)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
    if (displacement>=0){this->displacement = displacement;}
}

Ship::~Ship()
{
    delete [] brand;
}

Ship::Ship(Ship &s):Ship(s.number_of_seats,s.speed,s.brand,s.displacement){}

void Ship:: print() const
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<",";
    std::cout<<"displacement - "<< displacement <<"\n ";
}
void Ship::set_displacement(int displacement)
{
 if (displacement>0){this->displacement = displacement;}
}

int Ship :: get_displacement(int displacement) const
{
    return displacement;
}

Ship&Ship::operator=(Ship &s)
{
    this-> number_of_seats = s.number_of_seats;
    this-> speed = s.speed;
    this-> displacement = s.displacement;
    this ->brand = NULL;
    set_brand(s.brand);
    return *this;
}
