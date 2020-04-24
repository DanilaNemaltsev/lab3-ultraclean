#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
 {
     protected:
     char *brand;
     public:
      Car();
      Car(int number_of_seats, int speed, char *brand);
      ~Car();
      Car(Car &c);
     virtual void print() const =0 ;
     char * get_brand(char *brand) const;
     void set_brand(const char *brand);
     Car &operator=(Car &c);

 };

#endif // CAR_H_INCLUDED
