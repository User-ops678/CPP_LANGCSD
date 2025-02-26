#include "std_lib_facilities.h"

class Date {
    public:
        // ...
        int day() const {return d;}
        void add_day(int n);
        // ...
};
Date d(2000, Date::jan, 20);
const Date cd(2001, Date::feb, 21);

cout << d.day() << "-" << cd.day() << endl;
d.add_day(1);
cd.add_day(1);