#include <iostream>
using namespace std;

/**
 * Requires: A double representing a Fahrenheit temp
 * Modifies: Nothing
 * Effects: Calculates and returns the Celsius version of a given Fahrenheit temperature.
 */
double ConvertFahrenheitToCelsius(double pFahrenheitTemp);

/**
 * Requires: A double representing a Fahrenheit temp
 * Modifies: Nothing
 * Effects: Calculates and returns the Fahrenheit version of a given Celsius temperature.
 */
double ConvertCelsiusToFahrenheit(double pCelsiusTemp);

class Temperature
{
private:
    double fFahrenheitTemp;
public:
    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Initializes fFahrenheitTemp to 0
     */
    Temperature();

    /**
     * Requires: Nothing
     * Modifies: Nothing
     * Effects: Returns the Fahrenheit version of the fFahrenheitTemp
     */
    double GetFahrenheitTemp();

    /**
     * Requires: ConvertFahrenheitToCelsius
     * Modifies: Nothing
     * Effects: Calculates and returns the Celsius version of the fFahrenheitTemp
     */
    double GetCelsiusTemp();

    /**
     * Requires: ConvertCelsiusToFahrenheit
     * Modifies: fFahrenheitTemp
     * Effects: Converts the given pCelsiusTemp to Fahrenheit and updates fFahrenheitTemp
     */
    void SetCelsiusTemp(double pCelsiusTemp);

    /**
     * Requires: None
     * Modifies: fFahrenheitTemp
     * Effects: updates fFahrenheitTemp
     */
    void SetFahrenheitTemp(double pFahrenheitTemp);
};

/**
 * A tool for a user to determine how their day will go depending on the outside teperature.
 * This program supports a user entering the temperature in either the Fahrenheit or Celsius format.
 *
 * @return 0
 */
int main()
{
    int tempartureSystem = 0;
    printf("Welcome to my temperature analysis tool!\n");
    printf("Please enter 0  to analyze a Fahrenheit temperature, or any other int to analyze a Celsius temperature: ");
    while (!(cin >> tempartureSystem))
    {
        printf("Please enter an int: ");
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    int inputTemp = 0;

    printf("Please enter your temperature: ");
    while (!(cin >> inputTemp))
    {
        printf("Please enter an int: ");
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    Temperature myTemp;
    if (tempartureSystem == 1)
    {
        myTemp.SetFahrenheitTemp(inputTemp);
    }
    else
    {
        myTemp.SetCelsiusTemp(inputTemp);
    }

    string a;
    if (myTemp.GetCelsiusTemp() < 0)
    {
        a="cold";
    }
    else if (myTemp.GetCelsiusTemp() > 30)
    {
        a="hot";
    }
    else
    {
        a="beautiful";
    }

    cout << "Hello, " << a << " World!" << endl;
    return 0;
}

double ConvertFahrenheitToCelsius(double pFahrenheitTemp)
{
    return (pFahrenheitTemp - 32) * (5.0/9.0);
}

double ConvertCelsiusToFahrenheit(double pCelsiusTemp)
{
    return (pCelsiusTemp + 32) * (9.0/5.0);
}

Temperature::Temperature()
{
    fFahrenheitTemp = 0;
}


double Temperature::GetFahrenheitTemp()
{
    return fFahrenheitTemp;
}

double Temperature::GetCelsiusTemp()
{
    return ConvertFahrenheitToCelsius(fFahrenheitTemp);
}

void Temperature::SetCelsiusTemp(double pCelsiusTemp)
{
    fFahrenheitTemp = ConvertCelsiusToFahrenheit(pCelsiusTemp);
}

void Temperature::SetFahrenheitTemp(double pFahrenheitTemp)
{
    fFahrenheitTemp = pFahrenheitTemp;
}
