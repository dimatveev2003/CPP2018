#include "car.h"
 Car Car::operator + (const Car& car1) {return this->d+car1.d;}
 Car Car::operator - (const Car& car1) {return this->d-car1.d;}
 std::ostream & operator<< (std::ostream& stream, const Car& car1){stream<<car1.d;}
