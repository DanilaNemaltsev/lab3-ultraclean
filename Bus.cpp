#include "Bus.h"

Bus::Bus():Bus(0,0,"brand"){};

Bus::Bus(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Bus::~Bus()
{
    delete [] brand;
}

Bus::Bus(Bus &b):Bus(b.number_of_seats,b.speed,b.brand){}

void Bus:: print() const
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<"\n";
}

Bus&Bus::operator=(Bus &b)
{
    this-> number_of_seats = b.number_of_seats;
    this-> speed = b.speed;
    this ->brand = NULL;
    set_brand(b.brand);
    return *this;
}
