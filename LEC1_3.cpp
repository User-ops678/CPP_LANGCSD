#include "std_lib_facilities.h"

int main() {
    cout << "please enter your first name and age: ";
    string first_name;
    int age;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " age: " << age << '\n';
    //keep_window_open() //uncomment the first part to use on windows!
}