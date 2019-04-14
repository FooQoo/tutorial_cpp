#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_

class FundCalc{
    private:
        double num1;
        double num2;
    public:
        FundCalc();
        void setNum1(double number);
        void setNum2(double number);
        double getNum1();
        double getNum2();
        double add();
        double sub();
};

#endif