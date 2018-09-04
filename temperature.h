//
// Created by Lisa Dion on 9/4/18.
//

#ifndef STYLE_ME_TEMPERATURE_H
#define STYLE_ME_TEMPERATURE_H

#include <iostream>

/* * * * * Temperature Class Declaration * * * * */
class Temperature {
private:
    // fields
    double fahrenheit;
public:
    // default constructor
    // requires: none
    // modifies: fahrenheit
    // effects: sets fields to default values
    Temperature();

    // getters
    // requires: none
    // modifies: none
    // effects: returns value of field
    double get_fahrenheit() const;
    double get_celsius() const;

    // setters
    // requires: new value
    // modifies: field being set
    // effects: sets field to new specified value
    void set_fahrenheit(double temp_f);
    void set_celsius(double temp_c);
};

/* * * * * Global Function Declarations * * * * */

// requires: console prompt as string
// modifies: cin, cout
// effects: prompts user for integer with specified string and returns the integer from the
//          console, after ensuring that the user did in fact provide an integer.
int get_integer_from_console_with_prompt(const std::string &prompt);


#endif //STYLE_ME_TEMPERATURE_H
