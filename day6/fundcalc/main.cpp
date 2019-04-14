#include <iostream>
#include "newcalc.h"

using namespace std;

int main(){
    NewCalc n;
    n.setNum1(10);
    n.setNum2(2);
    cout << n.getNum1() << "+" << n.getNum2() << "=" << n.add() << endl;
    cout << n.getNum1() << "-" << n.getNum2() << "=" << n.sub() << endl;
    cout << n.getNum1() << "*" << n.getNum2() << "=" << n.mul() << endl;
    cout << n.getNum1() << "/" << n.getNum2() << "=" << n.div() << endl;
}
