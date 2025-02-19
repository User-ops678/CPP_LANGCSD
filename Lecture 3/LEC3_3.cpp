#include "std_lib_facilities.h"

class Bad_area{};

int area(int length, int width) {
    if (length <= 0 || width <= 0) throw Bad_area();
    return length*width;
}

int main() {
    try {
        int x;
        int y;
        cin >> x >> y;
        int z = area(x, y);
    }
    catch(Bad_area &b) {
        cerr << "oops! Bad area calculation-fix program\n";
    }
}