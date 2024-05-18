#include <iostream>
#include <cmath>
#include "returnDel.h"

int returnDel(int h, int d){
    int p = 0, s = ((h & (1 << 31)) != (d & (1 << 31))) ? -1 : 1;
    h = (h >= 0) ? h : -h;
    d = (d >= 0) ? d : -d;
    d = ~d + 1;
    while(h + d >= 0){
        p++;
        h = h + d;
    }
    p = p * s;
    return p;
}