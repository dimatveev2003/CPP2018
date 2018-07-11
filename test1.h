#ifndef T1
#define T1
#include "f.h"
#include "car.h"

void testF()
{
    f<double>(1.0,5.8); // instantiates and calls 
    f<int>(0,8); // instantiates and calls 
}

void testFandCar()
{
    f<Car>(Car(2),Car(8));
}
#endif
