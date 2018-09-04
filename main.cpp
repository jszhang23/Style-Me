#include "temperature.h"
using namespace std;


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
