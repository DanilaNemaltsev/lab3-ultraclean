#ifndef PASSENGER_CAR_H_INCLUDED
#define PASSENGER_CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

class Passenger_car : public Car
 {
  public:
      Passenger_car();
      Passenger_car(int number_of_seats, int speed, char *brand);
      ~Passenger_car();
      Passenger_car(Passenger_car &pc);
      void print() const;
      Passenger_car &operator=(Passenger_car &pc);
 };
#endif // PASSENGER_CAR_H_INCLUDED
