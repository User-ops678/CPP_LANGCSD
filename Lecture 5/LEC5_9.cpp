#include "std_lib_facilities.h"

class Date {
    public:
        enum Month {
            jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
        };
    Date(int y, Month m, int d);
    private:
        int y;
        Month m;
        int d;
};

Date my_birthday(1950, 30, Date::dec);
Date my_birthday(1950, Date::dec, 30);