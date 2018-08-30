/*
 *  changed by Jiesheng Zhang on 8/30/2018
 *  Fahrenheit and degree centigrade
 */
#include <iostream>
using namespace std;
class temp {
    double f;
public:
    temp() : f(32) {

    }
    double getF() const {
        return f;
    }
    void setF(double p) {
        f = p;
    }
    double getC() const {
        return (f-32)*(5/9);        // NEED TO FIX
    }
    double setC(double c) {
        f=c*(9/5)+32;
    } //BUGGY
};

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
    temp myTemp;
    if (choice == 1)
        myTemp.setF(t);
    else
        myTemp.setC(t);
    string a;
    if (myTemp.getC() < 0)
        a="cold";
    else if (myTemp.getC() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}