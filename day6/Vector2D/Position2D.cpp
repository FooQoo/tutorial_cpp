#include "position2D.h"

void Position2D::resetPosition(){
    init();
}

void Position2D::move(int dx, int dy)
{
    x += dx;
    y += dy;
}