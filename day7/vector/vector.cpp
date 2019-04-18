#include "vector.h"

Vector::Vector(): x(0), y(0)
{}

Vector::Vector(double x, double y)
{
    this->x = x;
    this->y = y;
}



void Vector::set(double x, double y)
{
    this->x = x;
    this->y = y;
}

double Vector::getX()
{
    return x;
}

double Vector::getY()
{
    return y;
}