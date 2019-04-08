#include <iostream>
#include "twostrings.h"

using namespace std;

int main(){
    Twostrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "1つ目の文字列は" << s.getString1() << endl;
    cout << "2つ目の文字列は" << s.getString2() << endl;
    cout << "2つ目の文字を合成したものは" << s.getConnectedString() << endl;
    cout << "合成した文字列長は" << s.getConnectedLength() << "文字" << endl;
    return 0;
}