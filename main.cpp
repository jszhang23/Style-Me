#include <iostream>
using namespace std;

class Temperature {
    double fahrenheit;
public:
    //Constructor
    temperature();

    //Getter
    double getTemperature() const;

    //Setters

    /*
     * Requires: A double value for the new fahrenheit temperature
     * Modifies: The value of fahrenheit
     * Effects: Nothing
     */
    void setTemperature(double newTemp);

    /*
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns fahrenheit as a celsius value
     */
    double getTemperatureInCelsius() const;

    /*
     * Requires: A double celsius value
     * Modifies: The value of fahrenheit as celsius * 9/5 + 32
     * Effects: Nothing
     */
    void setTemperatureAsCelsius(double celsius);
};

/********************************MAIN***************************/

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
    Temperature myTemperature;
    if (choice == 1)
        myTemperature.setTemperature(t);
    else
        myTemperature.setTemperatureAsCelsius(t);
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

/********************************END MAIN********************/


/*******************************DEFINE Temperature Class******************/
int Temperature::temperature() : fahrenheit(32);

double Temperature::getTemperature() const
{
    return fahrenheit;
}

void Temperature::setTemperature(double newTemp)
{
    fahrenheit = newTemp;
}

double Temperature::getTemperatureInCelsius() const
{
    return ((fahrenheit - 32)*(5/9))
}

void Temperature::setTemperatureAsCelsius(double celsius)
{
    fahrenheit = ((celsius*(9/5))+32);
}
