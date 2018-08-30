#include <iostream>
using namespace std;

class temp {

    double ferinheight;

public:
    temp() : ferinheight(32) {}

    double getFerinheight() const
    {
        return ferinheight;
    }

    void setFerinheight(double paremeter)
    {
        ferinheight = paremeter;
    }

    double getCelclus() const
    {
        return (ferinheight-32)*(5/9);        // NEED TO FIX
    }

    double setCelclus(double celclus)
    {
        ferinheight=(celclus*(9/5)+32);
    } //BUGGY
};

int main() {

    int choice = 0;


    cout<<"Enter a choice"<<endl; //Prompt the user

    //Enters an integer
    while (!(cin >> choice))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout<<"Invalid Choice"<<endl;
    }

    int tempature = 0;

    cout<<"Enter a tempaturez"<<endl; //Prompt the user
    while (!(cin >> tempature))
    {
        cin.clear();
        string junk;
        getline(cin, junk);
        cout<<"Invalid Choice"<<endl;
    }

    temp my_temp;

    if (choice == 1)
        my_temp.setFerinheight(t);
    else
        my_temp.setCelclus(t);
    string a;
    if (my_temp.getCelclus() < 0)
        a="cold";
    else if (my_temp.getCelclus() > 30)
        a="hot";
    else
        a="beautiful";
    cout << "Hello, " << a << " World!" << endl;
    return 0;
}