#include <iostream>
#include "calc.h"

using namespace std;

int main() {
    Calc c;
    c.setNumber1(8);
    c.setNumber2(9);

    cout << c.getNumber1() << "+" << c.getNumber2() << " = " << c.add() << endl;
    cout << c.getNumber1() << "-" << c.getNumber2() << " = " << c.sub() << endl;
    return 0;
}