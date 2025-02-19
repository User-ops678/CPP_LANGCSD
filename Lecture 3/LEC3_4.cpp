#include "std_lib_facilities.h"

int main() {
    vector<int> v(10);

    for (int i = 0; i<v.size(); ++i) v[i] = i;
    for (int i = 0; i<=10; ++i) cout << "v[" << i << "]==" << v[i] << endl; // throws the Range_error exception
}