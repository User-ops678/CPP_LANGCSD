#include "std_lib_facilities.h"

int area(int length, int width)
{
    return length*width;
}

int x1 = area(7); // error: too few arguments
int x2 = area("seven",2); // error: first argument has the wrong type
int x3 = area(7, 10); // OK
int x4 = area(7.5, 10); // OK but dangerous 7.5 is converted to 7
int x = area(10, -7); // OK but values dont make sense