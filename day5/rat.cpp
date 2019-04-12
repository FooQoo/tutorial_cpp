#include "rat.h"
#include <iostream>

using namespace std;

int Rat::count = 0;

Rat::Rat(): id(0){
    id = count;
    count++;
}
Rat::~Rat(){
    cout << "ネズミ:" << id << "消去" << endl;
    count--;
}
void Rat::showNum()
{
    cout << "現在のネズミの数は，" << count << "匹です．" << endl;
}
void Rat::squeak()
{
    cout << id << ":" << "chuchu" << endl;
}