#include <iostream>
#include <string>

using namespace std;

void e_1() {
    cout << "c++" << endl;
}

void e_2() {
    std::cout << "prigramming in C++ Language" << std::endl;
}

void e_3() {
    std::cout << "1 2 3" << endl << "4 5 6" << endl;
}

void e_4() {
    int x;
    cout << "数値を入力せよ：";
    cin >> x;
    cout << x << "*2=" << x*2 << endl;
}

void e_5() {
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << x << "+" << y << "=" << x+y << endl;
    cout << x << "-" << y << "=" << x-y << endl;
}

void e_6() {
    string firstname, lastname;
    cout << "姓：";
    cin >> firstname;
    cout << "名：";
    cin >> lastname;
    cout << "名前は" << firstname+lastname << endl;
}

void e_7() {
    // 名前空間が抜けている
    std::cout << "HelloWorld." << endl;
}

int main() {
    e_7();
    return 0;
}