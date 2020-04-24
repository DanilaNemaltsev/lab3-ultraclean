#include "Passenger_car.h"

Passenger_car::Passenger_car():Passenger_car(0,0,"brand"){};

Passenger_car::Passenger_car(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Passenger_car::~Passenger_car()
{
    delete [] brand;
}

Passenger_car::Passenger_car(Passenger_car &pc):Passenger_car(pc.number_of_seats,pc.speed,pc.brand){}

void Passenger_car:: print() const
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<"\n";
}

Passenger_car&Passenger_car::operator=(Passenger_car &pc)
{
    this-> number_of_seats = pc.number_of_seats;
    this-> speed = pc.speed;
    this ->brand = NULL;
    set_brand(pc.brand);
    return *this;
}
