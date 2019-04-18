#include <iostream>
#include "counter.h"

using namespace std;

int main(){
    Counter* p = new Counter();
    p->count();
    p->count();
    cout << p->getCount() << endl;
    p->count(4);
    cout << p->getCount() << endl;
    p->reset();
    cout << p->getCount() << endl;
    delete p;
    return 0;
}