#include <iostream>
using namespace std;

// The class temperatureConverter converts Fahrenheit to Celsius.
class temperatureConverter {
    double temperature;
public:
    fahrenheitTemperature() : temperature(32) {
    }
    double getFahrenheitTemperature() const {
        return temperature;
    }
    void setFahrenheitTemperature(double userInputTemperature) {
        temperature = userInputTemperature;
    }
    double getCelsiusTemperature() {
        temperature = (temperature-32)*(5/9);
        return temperature;
    }
    double setc(double c) { f=(c*(9/5)+32);} //BUGGY
};

int main() {
    int choice = 0;
    while (!(cin >> choice))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    int t = 0;
    while (!(cin >> t)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    temp mytemp;
    if (choice == 1)
        mytemp.setf(t);
    else
        mytemp.setc(t);
    string a;
    if (mytemp.getc() < 0)
        a="cold";
    else if (mytemp.getc() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}