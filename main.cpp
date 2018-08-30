#include <iostream>
using namespace std;

class Temperature {
    double fTemperature;

public:
    // Default constructor
    // Requires: optional double input
    // Modifies: fTemperature
    // Effects: sets fields to default values
    Temperature() : fTemperature(32) {
    }

    // Getters
    // Requires: nothing
    // Modifies: nothing
    // Effects: returns temperature in Fahrenheit or Celsius
    double getFahrenheit() const {
        return fTemperature;
    }
    double getCelsius() const {
        return (fTemperature-32)/1.8;
    }

    // Setters
    // Requires: input temperature (double)
    // Modifies: fTemperature
    // Effects: sets the fields
    void setFahrenheit(double pTemp) {
        fTemperature = pTemp;
    }
    void setCelsius(double pTemp) {
        fTemperature=(pTemp*(1.8)+32);
    }
};

int main() {
    int choice = 0;
    cout << "Enter 1 for Fahrenheit or 2 for Celsius" << endl;
    while (!(cin >> choice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Enter 1 or 2" << endl;
    }
    int t = 0;
    cout << "Enter a temperature" << endl;
    while (!(cin >> t)) {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout << "Temperature must be a number" << endl;
    }
    Temperature myTemp;
    if (choice == 1)
        myTemp.setFahrenheit(t);
    else
        myTemp.setCelsius(t);
    string a;
    if (myTemp.getCelsius() <= 0)
        a="cold";
    else if (myTemp.getCelsius() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}