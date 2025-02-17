#include "std_lib_facilities.h"

int main() {
    vector<double> temps; // a vector of doubles
    double temp;
    while (cin >> temp) { // we read a temp with cin
        temps.push_back(temp); // store it in the vector
    }
    double sum = 0;
    for(int i = 0; i<temps.size(); ++i) sum += temps[i];

    cout << "Mean temperature: " << sum/temps.size() << '\n';
    sort(temps.begin(),temps.end());
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}