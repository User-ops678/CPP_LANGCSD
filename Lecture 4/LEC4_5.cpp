#include "std_lib_facilities.h"

int x=3;
int* r = &x;
int& s = x;
int main() {
    cout << x << ' ' << *r << ' ' << s << endl;
}