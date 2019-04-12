#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object{
    private:
        static int object_num;
    public:
        Object();
        ~Object();
        static int getObjectNum();
};

#endif