#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : fuel(0), migration(0)
{
    cout << "Carオブジェクト生成" << endl;
}
Car::~Car()
{
    cout << "Carオブジェクト破棄" << endl;
}
void Car::move()
{
    if(fuel >= 0){
        migration++;
        fuel--;
    }
    cout << "移動距離" << migration << endl;
    cout << "燃料" << fuel << endl;
}
void Car::supply(int additional_fuel)
{
    if(fuel >= 0){
        fuel += additional_fuel;
    }
    cout << "燃料" << fuel << endl;
}