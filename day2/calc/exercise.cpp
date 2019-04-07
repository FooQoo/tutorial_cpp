#include <iostream>
#include "calc.h"

using namespace std;

void e_1() {
    Calc k;
    k.a = 4;
    k.b = 3;
    cout << k.a << " + " << k.b << " = " << k.add() << endl;
}

void e_2() {
    Calc k;
    k.a = 4;
    k.b = 3;
    cout << k.a << " - " << k.b << " = " << k.sub() << endl;
}

int main() {
    e_2();
    return 0;
}
