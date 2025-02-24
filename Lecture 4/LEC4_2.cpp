#include "std_lib_facilities.h"

int x;
int y;

int f() {
    int x;
    x = 7;
    {
        int x = y;
        ++x;
    }
}