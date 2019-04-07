#include <iostream>
#include "sample.h"

using namespace std;

void main_1() {
    Sample obj;// CSampleをインスタンス化
    int num;
    
    cout << "整数を入力して下さい:" << endl;
    cin >> num;
    
    obj.set( num ); // CSampleのメンバ変数をセット
    cout << obj.get() << endl;// メンバ変数の値を出力
}

void main_2() {
    Sample x, y;

    x.set( 1 );
    y.set( 2 );

    cout << x.get() << endl;
    cout << y.get() << endl;
}

int main() {
    main_2();
}