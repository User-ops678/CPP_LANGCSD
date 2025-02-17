#include "std_lib_facilities.h"

int max(int a, int b) {
    if (a<b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int x = max(7, 9);
    int y = max(19, -27);
    int z = max(20, 20);
}