#include "std_lib_facilities.h"

int main() {
    int a = 20000;
    char c = a;
    int b = c;
    if (a!=c) {
        cout << "oops!: " << a << "!=" << b << '\n';
    } else {
        cout << "WOW! We have a large character!";
    }
    //keep_window_open() //uncomment the first part to use on windows!
}