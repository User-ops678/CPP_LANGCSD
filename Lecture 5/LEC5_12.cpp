#include "std_lib_facilities.h"

enum Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m) {
    m = (m==dec) ? jan : Month(m+1);
    return m;
}

Month m = nov;
++m;
++m;