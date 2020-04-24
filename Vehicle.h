#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
using namespace std;

class Vehicle
{
  protected:
    int number_of_seats;
    int speed;
  public:
    Vehicle();
    Vehicle(int number_of_seats, int speed);
    Vehicle(Vehicle &v);
     ~Vehicle();
     virtual void print()const =0 ;
     void set_number_of_seats(int number_of_seats);
     void set_speed(int speed);
     int get_number_of_seats(int number_of_seats) const;
     int get_speed(int speed) const;
     Vehicle &operator=(Vehicle &v);

};

#endif // VEHICLE_H_INCLUDED
