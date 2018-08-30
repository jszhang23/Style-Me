#include <iostream>
using namespace std;

class Temperature {
    double fahrenheit;
    double celsius;
public:
    Temperature();
    double getFahrenheit() const;
    void setFahrenheit(double tempFahrenheit);
    double getCelsius() const;
    void setCelsius(double tempCelsius);
};

int main() {
    int choice = 0;
    string junk;
    int currentTemp = 0;
    
    cout << "Which scale are you using? 1 = Fahrenheit, 2 = Celsius : " << endl;
    while (!(cin >> choice)) {
        cout << " Enter temperatureAdjective valid integer, 1 = Fahrenheit, 2 = Celsius : " << endl;
        cin.clear();
        getline(cin, junk);
    }
    
    cout << "What is the current temperature outside?  " << endl;
    while (!(cin >> currentTemp)) {
        cout << "Please enter temperatureAdjective valid temperature : " << endl;
        cin.clear();
        getline(cin, junk);
    }
    
    Temperature myTemp;
    
    if (choice == 1) {
        myTemp.setFahrenheit(currentTemp);
    }
    else {
        myTemp.setCelsius(currentTemp);
    }
    
    string temperatureAdjective;
    
    if (myTemp.getCelsius() < 0) {
        temperatureAdjective = "cold";
    }
    else if (myTemp.getCelsius() > 30) {
        temperatureAdjective = "hot";
    }
    else
    {
        temperatureAdjective = "beautiful";
    }
    cout << "Hello, " << temperatureAdjective << " World!" << endl;
    return 0;
}

Temperature::Temperature() : fahrenheit(32), celsius(0) {
};

double Temperature::getFahrenheit() const {
    return fahrenheit;
}

void Temperature::setFahrenheit(double tempFahrenheit) {
    fahrenheit = tempFahrenheit;
    //celsius = (tempFahrenheit - (double)32) * (double)(5 / 9);
}

double Temperature::getCelsius() const {
    return celsius;
}

void Temperature::setCelsius(double tempCelsius) {
    fahrenheit=(tempCelsius * (9/5)) + 32;
    celsius = tempCelsius;
}