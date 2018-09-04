#include <iostream>
using namespace std;

class Temperature {
    double temperature;
    bool isFahrenheit;

public:
    //Constructor
    Temperature();

    //Getter
    /*
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns the value of temperature
     */
    double getTemperature() const;

    //Setters

    /*
     * Requires: A double value for the new temperature
     * Modifies: The value of temperature
     * Effects: Nothing
     */
    void setTemperature(double newTemp);

    /*
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns temperature as a celsius value
     */
    double getTemperatureInCelsius() const;

    /*
     * Requires: A double value for temperature in Celsius
     * Modifies: The value of temperature as celsius * 9/5 + 32
     * Effects: Nothing
     */
    void setTemperatureAsCelsius(double celsius);
};

/********************************MAIN***************************/

int main() {
    int choice = 0;
    cout << "Enter 1 to use this calculator with Fahrenheit, 0 for Celsuis" << endl;
    while (!(cin >> choice))
    {
        cout << "Please enter an integer." << endl;
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    int temp = 0;
    cout << "Enter what temperature you want to test, in your chosen degree" << endl;
    while (!(cin >> temp))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    Temperature myTemperature;
    if (choice == 1)
        myTemperature.setTemperature(temp);
    else
        myTemperature.setTemperatureAsCelsius(temp);
    string descriptor;
    if (myTemperature.getTemperatureInCelsius() < 0)
        descriptor="cold";
    else if (myTemperature.getTemperatureInCelsius() > 30)
        descriptor="hot";
    else
        descriptor="beautiful";
    cout << "Hello, " << descriptor << " World!" << endl;
    return 0;
}



/********************************END MAIN********************/


/*******************************DEFINE Temperature Class******************/
Temperature::Temperature(): temperature(32), isFahrenheit(true) {};

double Temperature::getTemperature() const
{
    return temperature;
}

void Temperature::setTemperature(double newTemp)
{
    temperature = newTemp;
}

double Temperature::getTemperatureInCelsius() const
{
    if(isFahrenheit)
    {
        return ((temperature - 32)* ((double)5/9));
    }
    else
    {
        return temperature;
    }

}

void Temperature::setTemperatureAsCelsius(double celsius)
{
    isFahrenheit = false;
    temperature = ((celsius * ((double)9/5))+32);
}