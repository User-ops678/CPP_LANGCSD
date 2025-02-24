#include "std_lib_facilities.h"

class My_vector {
    vector<int> v;
public:
    int largest() {
        int r = 0;
        for (int i = 0; i<v.size(); ++i) {
            r = max(r,abs(v[i]));
        }
        return r;
    }
};