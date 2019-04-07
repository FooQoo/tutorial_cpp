#include "minmax.h"

int Minmax::max(int x, int y, int z) {
    int max = x;
    if (max < y) {
        max = y;
    }
    if (max < z) {
        max = z;
    }
    return max;
}

int Minmax::min(int x, int y, int z) {
    int min = x;
    if (min > y) {
        min = y;
    }
    if (min > z){
        min = z;
    }
    return min;
}