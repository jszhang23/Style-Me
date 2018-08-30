#include <iostream>
using namespace std;

// Class Temperature converts Celsius to Fahrenheit or Fahrenheit to Celsius

class Temperature {
    double fahrenheit;

public:
    temperature() : fahrenheit(32) {}


    double getFahrenheit() const {
        return fahrenheit;}

    // Takes celsius as a parameter and converts it to fahrenheit
    void setFahrenheit(double celsius) {
        fahrenheit=(celsius * (9/5) + 32); }

    double getCelsius() const {
        return celsius;}        // NEED TO FIX

    // Takes fahrenheit as a parameter and converts it to celsius
    double setCelsius(double fahrenheit) {
        celsius= (fahrenheit-32)*(5/9);} //BUGGY
};

int main() {
    cout << "Enter 1 for celsius or 1 for celsius";
    int choice = 0;
    while (!(cin >> choice)) {
        cin.clear();
        string choice;
        getline(cin, choice);
        print "Please enter an integer"
    }

    int temperature = 0;

    while (!(cin >> temperature)) {
        cin.clear();
        string junk;
        getline(cin, junk); }

    Temperature myTemperature;

    if (choice == 1)
        myTemperature.setFahrenheit(temperature);

    else
        myTemperature.setCelsius(temperature);
    string a;

    if (myTemperature.getCelsius() < 0)
        a="cold";

    else if (myTemperature.getCelsius() > 30)
        a="hot";

    else
        a="beautiful";
    cout << "It is " << a << " outside!!" << endl;
    return 0;
}