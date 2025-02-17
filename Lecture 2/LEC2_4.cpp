#include "std_lib_facilities.h"

int main() {
    vector<double> temps; // a vector of doubles

    double temp;
    while (cin >> temp) { // we read a temp with cin
        temps.push_back(temp); // store it in the vector
        //...
    }
}