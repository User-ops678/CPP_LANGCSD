#include "std_lib_facilities.h"

class X {
    public:
        int m;
        int mf(int v) {int old = m; m=v; return old;}
};

int main() {
    X var;
    var.m = 7;
    int x = var.mf(9);
    X var2;
    cout << var2.m << endl; // Will print garbage value
}