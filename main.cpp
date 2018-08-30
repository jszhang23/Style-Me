#include <iostream>
using namespace std;

/*
 * This program contains:
 * Temp class
 *
 * TODO: Change temperature selection to be only one accepted integer for celsius instead of any
 */

class localTemperatureGreeting {
    double fahrenheit;
public:
    localTemperatureGreeting() : fahrenheit(32) {

    }
    double getFahrenheit() const {
        return fahrenheit;
    }
    void setFahrenheit(double newTemp) {
        fahrenheit = newTemp;
    }
    double getCelsius() const {
        return (fahrenheit-32)*((float)5/(float)9);
    }
    double setCelsius(double celsius) {
        fahrenheit = (celsius*((float)9/(float)5)+32);
    }
};

void testLocalTemperatureGreeting() {
    cout << endl << "Testing the localTemperatureGreeting Class" << endl;
    cout << "Enter 1 for Fahrenheit, any other int for Celsius: ";
    int degreeChoice = 0;
    while (!(cin >> degreeChoice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Enter an integer: ";
    }
    int myTemp = 0;
    cout << "Enter your local temperature: ";
    while (!(cin >> myTemp)) {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Enter an integer for temperature: ";
    }
    localTemperatureGreeting localTemp;
    if (degreeChoice == 1) {
        localTemp.setFahrenheit(myTemp);
    }
    else {
        localTemp.setCelsius(myTemp);
    }
    string a;
    if (localTemp.getCelsius() < 0) {
        a = "cold";
    }
    else if (localTemp.getCelsius() > 30) {
        a = "hot";
    }
    else {
        a = "beautiful";
    }

    cout << "Hello, " << a << " World!" << endl;
}
int main() {
    testLocalTemperatureGreeting();
    return 0;
}