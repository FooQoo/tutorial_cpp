#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

// 親クラスを継承した子クラスの定義の方法
class Ambulance: public Car{
    private:
        int number;
    public:
        Ambulance();
        virtual ~Ambulance();
        void savePeople();
};

#endif