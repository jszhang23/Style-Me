//
// Created by 卢静 on 2018/9/4.
//

#ifndef STYLE_ME_TEMPERATURE_H
#define STYLE_ME_TEMPERATURE_H
#include <iostream>
class temp {
    double fahrenheit;
    double celsius;
public:
    temp() : fahrenheit(32) {}
    double getFahrenheit() const {
        return fahrenheit;
    }
    void setFahrenheit(double p) {
        fahrenheit = p;
    }
    double getCelsius() const {
        return (fahrenheit-32)*(9/5);        // NEED TO FIX
    }
    double setCelsius(double c) {
        celsius=(c+32)*(9/5);
    } //BUGGY
};
#endif //STYLE_ME_TEMPERATURE_H
