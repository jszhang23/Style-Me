#include <iostream>
using namespace std;

class Temperature {
    double fahrenheit;
public:
    Temperature();
    double getFahrenheit() const;
    void setFahrenheit(double tempFahrenheit);
    double getCelsius() const;
    double setCelsius(double tempCelsius);
};

int main() {
    int choice = 0;
    string junk;
    int currentTemp = 0;
    
    cout << "Which scale are you using? 1 = Fahrenheit, 2 = Celsius : " << endl;
    while (!(cin >> choice)) {
        cout << " Enter a valid integer, 1 = Fahrenheit, 2 = Celsius : " << endl;
        cin.clear();
        getline(cin, junk);
    }
    
    cout << "What is the current temperature outside?  " << endl;
    while (!(cin >> currentTemp)) {
        cout << "Please enter a valid temperature : " << endl;
        cin.clear();
        getline(cin, junk);
    }
    
    Temperature myTemp;
    
    if (choice == 1) {
        myTemp.setFahrenheit(currentTemp);
        myTemp.setCelsius(myTemp.getCelsius());
    }
    else {
        myTemp.setCelsius(currentTemp);
        myTemp.setFahrenheit(myTemp.getFahrenheit());
    }
    
    string a;
    
    if (myTemp.getCelsius() < 0) {
        a = "cold";
    }
    else if (myTemp.getCelsius() > 30) {
        a = "hot";
    }
    else
    {
        a = "beautiful";
    }
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}

Temperature::Temperature() : fahrenheit(32) {
};

double Temperature::getFahrenheit() const {
    return fahrenheit;
}

void Temperature::setFahrenheit(double tempFahrenheit) {
    fahrenheit = tempFahrenheit;
}

double Temperature::getCelsius() const {
    return (fahrenheit - 32) * (5 / 9);
}// Buggy

double Temperature::setCelsius(double tempCelsius) {
    fahrenheit=(tempCelsius * (9/5)) + 32;
} //BUGGY