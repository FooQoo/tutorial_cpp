#include "twoStrings.h"
#include <string>

using namespace std;

void Twostrings::setString1(string s) {
    m_1 = s;
}
void Twostrings::setString2(string s) {
    m_2 = s;
}
string Twostrings::getString1() {
    return m_1;
}
string Twostrings::getString2() {
    return m_2;
}
string Twostrings::getConnectedString() {
    return m_1 + m_2;
}
int Twostrings::getConnectedLength() {
    return getConnectedString().length();
}