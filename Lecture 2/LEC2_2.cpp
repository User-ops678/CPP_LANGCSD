#include "std_lib_facilities.h"
int square(int x) {
    return x*x;
}

int main() {
    int a = 0;
    while(a<100) {
        cout << a << '\t' << square(a)<<'\n';
        ++a;
    }
}