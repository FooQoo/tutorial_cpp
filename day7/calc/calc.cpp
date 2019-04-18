#include "calc.h"

Calc::Calc(): a(0), b(0)
{}

Calc::Calc(int a, int b): a(a), b(b)
{}

int Calc::add()
{
    return a+b;
}

int Calc::add(int a, int b)
{
    return a + b;
}

void Calc::setValue(int a, int b)
{
    this->a = a;
    this->b = b;
}

int Calc::getA()
{
    return a;
}

int Calc::getB()
{
    return b;
}

