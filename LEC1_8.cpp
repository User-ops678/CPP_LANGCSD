#include "std_lib_facilities.h"

int main() {
    const double cm_per_inch = 2.54;
    int val;
    char unit;
    while(cin>>val>>unit) {
        if(unit == 'i')
            cout << val << "in == " << val*cm_per_inch << "cm\n";
        else if(unit == 'c')
            cout << val << "cm == " << val/cm_per_inch << "in\n";
        else
            return 0;
    }
}