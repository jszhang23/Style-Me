/*
 * Runs conversions to decide
 */
#include <iostream>
using namespace std;

class temp {
    double f;
public:
    temp() : f(32) {}
    double get_f() const {
        return f;
    }

    void set_f(double  p) {
        f = p;
    }

    double get_c() const {
        return (f-32)*(5/9);        // NEED TO FIX
    }

    double set_c(double c) {
        f=(c*(9/5)+32);
    } //BUGGY

    string get_input(const string & output_string){
        cout << output_string;
        string junk;
        int choice = 0;
        while (!(cin >> choice)) {
            cin.clear();
            getline(cin, junk);
        }
        return junk;
    }

};

int main() {



    int choice = 0;
    cout << "Please enter 1 for Fahrenheit or 2 for celsius:" << endl;
    while (!(cin >> choice)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }
    cout << "Enter the  Temperature " << endl;
    int t = 0;
    while (!(cin >> t)) {
        cin.clear();
        string junk;
        getline(cin, junk);
    }

    temp my_temp;

    if (choice == 1)
        my_temp.set_f(t);
    else
        my_temp.set_c(t);

    string a;
    if (my_temp.get_c() < 0)
        a="cold";
    else if (my_temp.get_c() > 30)
        a="hot";
    else
        a="beautiful";

    cout << "Hello, " << a << " World!" << endl;

    return 0;
}