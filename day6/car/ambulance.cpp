#include "ambulance.h"
#include <iostream>

using namespace std;

Ambulance::Ambulance(): number(119)
{
    cout << "Amubulanceオブジェクト生成" << endl;
}

Ambulance::~Ambulance()
{
    cout << "Ambulanceオブジェクト破棄" << endl;
}

void Ambulance::savePeople(){
    cout << "救急救命活動" << endl << "呼び出しは" << number << endl;
}