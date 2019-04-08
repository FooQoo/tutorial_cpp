#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

#include <iostream>
#include <string>

using namespace std;

class Twostrings{
    private:
        string m_1;
        string m_2;
    public:
        void setString1(string s);
        void setString2(string s);
        string getString1();
        string getString2();
        string getConnectedString();
        int getConnectedLength();
};

#endif