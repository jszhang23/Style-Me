#include <iostream>
using namespace std;

/* * * * * Temperature Class Declaration * * * * */
class Temperature {
private:
    // fields
    double fahrenheit;
public:
    // default constructor
    // requires: none
    // modifies: fahrenheit
    // effects: sets fields to default values
    Temperature();

    // getters
    // requires: none
    // modifies: none
    // effects: returns value of field
    double get_fahrenheit() const;
    double get_celsius() const;

    // setters
    // requires: new value
    // modifies: field being set
    // effects: sets field to new specified value
    void set_fahrenheit(double tempF);
    void set_celsius(double tempC);
};

/* * * * * Global Function Declarations * * * * */

// requires: console prompt as string
// modifies: cin, cout
// effects: prompts user for integer with specified string and returns the integer from the
//          console, after ensuring that the user did in fact provide an integer.
int get_integer_from_console_with_prompt(const string &prompt);


int main() {
    int degree_system = get_integer_from_console_with_prompt("celsius (0) or fahrenheit (1): ");
    if (degree_system < 0 || degree_system > 1) {
        cout << "invalid degree system selection!";
        exit(1);
    }
    int input_temperature = get_integer_from_console_with_prompt("temperature: ");

    Temperature new_temperature;

    if (degree_system == 1) {
        new_temperature.set_fahrenheit(input_temperature);
    }
    else if (degree_system == 0) {
        new_temperature.set_celsius(input_temperature);
    }

    string adjective;
    if (new_temperature.get_celsius() <= 0) {
        adjective = "cold";
    }
    else if (new_temperature.get_celsius() >= 30) {
        adjective = "hot";
    }
    else {
        adjective = "beautiful";
    }
    cout << "Hello, " << adjective << " world!" << endl;
    return 0;
}

/* * * * * Temperature Class Implementation * * * * */

Temperature::Temperature() : fahrenheit(32) {}

double Temperature::get_fahrenheit() const {
    return fahrenheit;
}
void Temperature::set_fahrenheit(double tempF) {
    fahrenheit = tempF;
}
double Temperature::get_celsius() const {
    return (fahrenheit - 32) * (5./9);
}
void Temperature::set_celsius(double tempC) {
    fahrenheit = tempC * (9./5) + 32;
}

/* * * * * Global Function Implementations * * * * */
int get_integer_from_console_with_prompt(const string &prompt) {
    int input = 0;
    cout << prompt;

    // validate input
    while (!(cin >> input)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    return input;
}
