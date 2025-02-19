#include "std_lib_facilities.h"

int area(int length, int width)
{
    if(length<=0 || width<=0) return -1;
    return length*width;
}

