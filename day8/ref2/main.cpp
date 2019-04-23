#include <iostream>

using namespace std;

int main() {
    int a = 7;
    int &n = a;
    // 参照渡し、参照渡しされた変数の値を変更できる
    cout << "a=" << a << endl;
    n += 3;
    cout << "a=" << a << endl;
}