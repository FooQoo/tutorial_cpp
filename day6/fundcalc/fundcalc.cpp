#include "fundcalc.h"

FundCalc::FundCalc() : num1(0), num2(0)
{
}

void FundCalc::setNum1(double number)
{
    num1 = number;
}

void FundCalc::setNum2(double number)
{
    num2 = number;
}

double FundCalc::getNum1()
{
    return num1;
}

double FundCalc::getNum2()
{
    return num2;
}

double FundCalc::add()
{
    return num1 + num2;
}

double FundCalc::sub()
{
    return num1 - num2;
}