#include <iostream>
using namespace std;

class Temperature {
private:
    double fFahrenheit;

public:
    Temperature() : fFahrenheit(0) {}


    double getFahrenheit() const {
        return fFahrenheit;
    }


    void setFahrenheit(double aFahrenheit) {
        fFahrenheit = aFahrenheit;
    }


    double getCelsius() const {
        return (fFahrenheit - 32) * (5 / 9.0);        // NEED TO FIX
    }


    void setCelsius(double aCelsius) {
        setFahrenheit(aCelsius * (9/5.0) + 32);
    } //BUGGY
};

int main() {
    cout << "Enter 0 to set Celsius, 1 to set Fahrenheit" << endl;
    int choice = 0;
    while (!(cin >> choice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    cout << "Enter Temperature" << endl;
    int t = 0;
    while (!(cin >> t)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    Temperature myTemp;

    if (choice == 1) {
        myTemp.setFahrenheit(t);
    } else {
        myTemp.setCelsius(t);
    }

    string a;
    if (myTemp.getCelsius() < 0) {
        a = "cold";
    } else if (myTemp.getCelsius() > 30) {
        a = "hot";
    } else {
        a = "beautiful";
    }

    cout << "Celsius " << myTemp.getCelsius() << endl;
    cout << "Fahrenheit " << myTemp.getFahrenheit() << endl;
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}