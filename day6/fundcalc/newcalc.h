#ifndef _NEWCALC_H_
#define _NEWCALC_H_

#include "fundcalc.h"

class NewCalc: public FundCalc
{
    public:
        NewCalc();
        double mul();
        double div();
};

#endif