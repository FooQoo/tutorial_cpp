#include "hoge.h"
#include <iostream>

using namespace std;

Hoge::Hoge()
{
    cout << "こんすとらくた" << endl;
}
Hoge::~Hoge()
{
    cout << "デストラクタ" << endl;
}
void Hoge::foo()
{
    cout << "fooメソッド" << endl;
}