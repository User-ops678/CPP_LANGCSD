#include "std_lib_facilities.h"
int main() {
    int a = 0;
    int b = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (a<b) {
        cout << "max(" << a << "," << b << ") is " << b << '\n';
    } else {
        cout << "max(" << a << "," << b << ") is " << a << '\n';
    }
}