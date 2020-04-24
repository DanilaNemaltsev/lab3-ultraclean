#include "Car.h"

Car::Car():Car(0,0,"brand"){};

Car::Car(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>0){this->number_of_seats = number_of_seats;}
    if (speed>0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Car::~Car()
{
    delete [] brand;
}

Car::Car(Car &c):Car(c.number_of_seats,c.speed,c.brand){}

void Car :: set_brand(const char *brand)
{
 delete[] this->brand;
 int len = strlen(brand)+1;
 this ->brand = new char [len];
 strcpy(this->brand, brand);
}

char * Car :: get_brand(char *brand) const
{
    strcpy(brand, this->brand);
    return brand;
}

Car&Car::operator=(Car &c)
{
    this-> number_of_seats = c.number_of_seats;
    this-> speed = c.speed;
    this ->brand = NULL;
    set_brand(c.brand);
    return *this;
}
