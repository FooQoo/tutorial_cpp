#include "counter.h"

Counter::Counter(): num(0)
{}

void Counter::reset()
{
    num = 0;
}
int Counter::getCount()
{
    return num;
}

void Counter::count()
{
    ++num;
}

void Counter::count(int num)
{
    this->num += num;
}
 