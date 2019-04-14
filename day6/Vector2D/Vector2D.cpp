#include "Vector2d.h"

Vector2D::Vector2D()
{
    init();
}

void Vector2D::setValue(int x_in, int y_in)
{
    x = x_in; y = y_in;
}

int Vector2D::getX()
{
    return x;
}

int Vector2D::getY()
{
    return y;
}

void Vector2D::init()
{
    x = 0; y = 0;
}