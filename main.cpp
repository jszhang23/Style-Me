#include <iostream>
using namespace std;

class temp {
    double fahrenheit;
    double celsius;
public:
    temp() : fahrenheit(32) {}
    double get_Fahrenheit() const {
        return fahrenheit;
    }
    void set_Fahrenheit(double far) {
        fahrenheit = far;
    }
    double get_Celsius() const {
        return (fahrenheit-32)/(9/5);        // NEED TO FIX
    }
    double set_Celsius(double cel) {
        celsius = (cel+32)*(9/5);
    } //BUGGY
};

int main() {
    int choice = 0;
    while (!(cin >> choice)) {
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
        mytemp.set_Fahrenheit(t);
    else
        mytemp.set_Celsius(t);
    string a;
    if (mytemp.get_Celsius() < 0)
        a="cold";
    else if (mytemp.get_Celsius() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}