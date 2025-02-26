#include "std_lib_facilities.h"

//...
Date next_Sunday(const Date& d)
{
    Date next = d;
    next.add_day(1);
    while (next.day_of_week() != Date::sunday)
        next.add_day(1);
    return next;
}

Date next_weekday(const Date& d)
{
    Date next = d;
    next.add_day(1);
    while (next.day_of_week() == Date::saturday || next.day_of_week() == Date::sunday)
        next.add_day(1);
    return next;
}

bool operator==(const Date& a, const Date& b) {
    return a.year() == b.year()
        && a.month() == b.month()
        && a.day() == b.day();
}

bool operator!=(const Date& a, const Date& b) {
    return !(a == b);
}