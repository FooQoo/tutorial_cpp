#ifndef _CALC_H_
#define _CALC_H_

class Calc{
    private:
        int num1;
        int num2;
    public:
        void setNumber1(int x);
        void setNumber2(int x);
        int getNumber1();
        int getNumber2();
        int add();
        int sub();
};

#endif