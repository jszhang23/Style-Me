//
// Created by Lisa Dion on 9/4/18.
//

#include "temperature.h"
using namespace std;

/* * * * * Temperature Class Implementation * * * * */

Temperature::Temperature() : fahrenheit(32) {}

double Temperature::get_fahrenheit() const {
    return fahrenheit;
}
void Temperature::set_fahrenheit(double temp_f) {
    fahrenheit = temp_f;
}
double Temperature::get_celsius() const {
    return (fahrenheit - 32) * (5./9);
}
void Temperature::set_celsius(double temp_c) {
    fahrenheit = temp_c * (9./5) + 32;
}

/* * * * * Global Function Implementations * * * * */
int get_integer_from_console_with_prompt(const string &prompt) {
    int input = 0;
    cout << prompt;

    // validate input
    while (!(cin >> input)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    return input;
}
