#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

class Plane : public Car
 {
   protected:
      int flight_hours;
   public:
      Plane();
      Plane(int number_of_seats, int speed, char *brand, int flight_hours);
      ~Plane();
      Plane(Plane &pl);
      void print() const;
      void set_flight_hours(int flight_hours);
      int get_flight_hours(int flight_hours) const;
      Plane &operator=(Plane &pl);

 };
#endif // PLANE_H_INCLUDED
