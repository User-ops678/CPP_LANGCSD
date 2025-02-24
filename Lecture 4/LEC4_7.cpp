#include "std_lib_facilities.h"

int fib(int number) {
    if (number == 0) return 0;
    if (number == 1) return 1;
    return (fib(number - 1) + fib(number - 2));
}
int main() {
    int input_number = 0;
    cout << "Please enter a number: ";
    cin >> input_number;
    cout << "The Fibonacci number for " << input_number << " is " << fib(input_number) << endl;
    return 0;
}