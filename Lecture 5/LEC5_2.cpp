#include "std_lib_facilities.h"

struct Date {
    int y, m, d;
    Date(int y, int m, int d);
    void add_day(int n);
};

Date my_birthday;
Date my_birthday(12, 30, 1950);
Date my_day(1950, 12, 30);
my_day.add_day(2);
my_day.m = 14;