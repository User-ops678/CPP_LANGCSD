#include<iostream>

using namespace std;

class Vector {
    int sz;
    double * elem;
    public:
        Vector(int s) : sz(s), elem(new double[s]) {}
        int size() const { return sz; }
};

double* make(int i) {
    return new double[i];
}

int main() {
    // Examples:

    int n = 10;

    int* p = new int;

    int* q = new int[7];

    double* pd = new double[n];

    // ---------------------
    int* p1 = new int;
    int* p2 = new int(5);

    int x = *p2;
    int y = *p1;
    cout << p2 << endl;
    // -----------------------

    char* p1 = new char('c');
    int* p2 = new int(7);
    cout << "p1=="<<p1<<"*p1=="<<*p1<<endl;
    cout << "p2=="<<p2<<"*p2=="<<*p2<<endl;

    // -----------------------------

    double* p1 = new double;
    p1[0] = 8.2;
    p1[17] = 9.4; // Error
    p1[-4] = 2.4; // Error

    double* p2 = new double[100];
    *p2=7.3;
    p2[17]=9.4;
    p2[-4]=2.4; // Error
    p1=p2;
    p1[17]=9.4; //Good
}