#ifndef _RAT_H_
#define _RAT_H_

class Rat{
    public:
        Rat();
        ~Rat();
        static void showNum();
        void squeak();
    private:
        int id;
        static int count;
};

#endif