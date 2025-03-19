#include "std_lib_facilities.h"

void fill_vector(istream& ist, vector<int>& v, char terminator) {
    int i = 0;
    while(ist >> i) v.push_back(i);
    if(ist.eof()) return;
    if(ist.bad()) error("ist is bad");
    if(ist.fail()) {
        ist.clear();
        char c;
        ist >> c;
        if(c!=terminator) {
            ist.unget();
            ist.clear(ios_base::failbit);
        }
    }
}

int main() {
    vector<int> v;
    fill_vector(cin, v, '|');
    for(int i : v) cout << i << '\n';
    return 0;
}