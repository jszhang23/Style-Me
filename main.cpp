/*
 * Changed by JING LU
 */
#include <iostream>
using namespace std;

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
        mytemp.setFahrenheit(t);
    else
        mytemp.setCelsius(t);
    string a;
    if (mytemp.getCelsius() < 0)
        a="cold";
    else if (mytemp.getCelsius() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}