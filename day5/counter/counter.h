#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
    private:
        int num_count;
        static int totalCount;
    public:
        Counter();
        void reset();
        void count();
        int getCount();
        static int getTotalCount();
};

#endif