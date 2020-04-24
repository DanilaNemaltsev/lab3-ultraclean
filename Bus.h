#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

class Bus : public Car
 {
  public:
      Bus();
      Bus(int number_of_seats, int speed, char *brand);
      ~Bus();
      Bus(Bus &b);
      void print() const;
      Bus &operator=(Bus &b);
 };
#endif // BUS_H_INCLUDED
