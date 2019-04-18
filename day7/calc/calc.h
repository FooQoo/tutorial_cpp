#ifndef _CALC_H_
#define _CALC_H_

class Calc{
    private:
        int a;
        int b;
    public:
        Calc();
        Calc(int a, int b);
        int add();
        int add(int a, int b);
        void setValue(int a, int b);
        int getA();
        int getB();
};

#endif