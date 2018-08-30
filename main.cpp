#include <iostream>
using namespace std;

class Temperature_Converter {
    double fahr;
    int f_constant;
public:
    Temperature_Converter() : fahr(32) {
    }
    double get_Fahrenheit() const {
        return fahr;
    }
    void set_Fahrenheit(double cur_fahr) {
        fahr = cur_fahr;
    }
    double get_Celsius() const {
        return (fahr - f_constant) * (5/9);
    }
    double set_Celsius(double celsius) {
        fahr = celsius * (9/5) + f_constant;
    }
};

int main() {
    cout << "Enter 1 to begin: ";
    int choice = 0;
    while (!(cin >> choice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    cout << "Enter in a temperature in fahrenheit: ";
    int temp = 0;
    while (!(cin >> temp)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    Tempurature_Converter my_temp;
    if (choice == 1)
        my_temp.set_Fahrenheit(temp);
    else
        my_temp.setc(temp);
    string cpu_reply;
    if (my_temp.get_Celsius() < 0)
        cpu_reply="it's cold in celsius";
    else if (my_temp.get_Celsius() > 30)
        cpu_reply="it's hot in celsius";
    else
        cpu_reply="it's temperate in celsius :)";
    cout << cpu_reply;
    return 0;
}