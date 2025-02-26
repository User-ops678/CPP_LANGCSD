#include "std_lib_facilities.h"

class Date {
    int y,m,d;
    public:
        Date(int y, int m, int d);
        void add_day(int n);
        int month() {return m;}
        int day() {return d;}
        int year() {return y;}
};

Date my_birthday(1950, 12, 30);
cout << my_birthday.month() << endl;
my_birthday.m = 14;