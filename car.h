#ifndef CAR
#define CAR
#include <iostream>
#include <ostream>

class Car
{
 private: int d;
 public:
 Car(int _d):d(_d){}
 Car operator + (const Car& car1);
 Car operator - (const Car& car1);
 friend std::ostream &operator<< (std::ostream& stream, const Car& car1);
};
#endif
