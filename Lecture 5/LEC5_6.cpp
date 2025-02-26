#include "std_lib_facilities.h"

enum Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month m = feb;
m = 7;
int n = m;
Month mm = Month(7);