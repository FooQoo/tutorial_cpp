#ifndef _CAR_H_
#define _CAR_H_

class Car{
    public:
        Car();
        ~Car();
        void move();
        void supply(int additional_fuel);
    private:
        int fuel;
        int migration;
};

#endif