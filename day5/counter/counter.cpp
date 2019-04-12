#include "counter.h"

int Counter::totalCount = 0;

Counter::Counter(): num_count(0)
{
}
void Counter::reset(){
    num_count = 0;
    totalCount= 0;
}
void Counter::count(){
    num_count++;
    totalCount++;
}
int Counter::getCount(){
    return num_count;
}
int Counter::getTotalCount(){
    return totalCount;
}