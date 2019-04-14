#ifndef _CAR_H_
#define _CAR_H_

class Car{
    private:
        int fuel;
        int migration;
    public:
        Car();
        // デストラクタにはvirtual修飾詞をつける
        virtual ~Car();
        void move();
        void supply(int additional_fuel);
};
#endif