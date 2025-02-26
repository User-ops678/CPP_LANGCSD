#include "std_lib_facilities.h"

class Date {
    public:
        class Invalid {};
        Date(int y, int m, int d);
        void add_day(int n);
        int month() {return m;}
        int day() {return d;}
        int year() {return y;}
    private:
        int y,m,d;
        bool check(int y, int m, int d);
};

Date::Date(int yy, int mm, int dd) {
    :y{yy}, m{mm}, d{dd}
    {
        if (!check(yy, mm, dd)) throw Invalid{};
        y = yy;
        m = mm;
        d = dd;
    }
}