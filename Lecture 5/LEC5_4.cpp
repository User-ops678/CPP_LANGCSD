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

Date::Date(int yy, int mm, int dd) 
    :y{yy}, m{mm}, d{dd} 
void Date::add_day(int n ) {
    d += n;
}
