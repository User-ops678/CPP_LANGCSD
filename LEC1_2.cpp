#include "std_lib_facilities.h"

int main() {
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;
    string name = first + ' ' + second;

    cout << "Hello, "<<name<<'\n';
    //keep_window_open() //uncomment the first part to use on windows!
}