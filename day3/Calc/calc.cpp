#include "calc.h"

void Calc::setNumber1(int x){
    num1 = x;
}
void Calc::setNumber2(int x){
    num2 = x;
}
int Calc::getNumber1(){
    return num1;
}
int Calc::getNumber2(){
    return num2;
}
int Calc::add(){
    return num1 + num2;
}
int Calc::sub(){
    return num1 - num2;
}