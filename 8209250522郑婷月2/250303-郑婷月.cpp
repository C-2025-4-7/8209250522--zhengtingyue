#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << "Celsius    Fahrenheit   |   Fahrenheit    Celsius" << endl;
    double celsius_left = 40.0;
    double fahrenheit_right = 120.0;

    for (int i = 0; i < 10; i++) {
        double fahrenheit_left = celsius_to_fah(celsius_left);
        double celsius_right = fahrenheit_to_cels(fahrenheit_right);
        cout << fixed << setprecision(1);
        cout << celsius_left << "        " << fahrenheit_left << "        |   ";

        cout << fixed << setprecision(1);
        cout << fahrenheit_right << "          ";

        cout << fixed << setprecision(2);
        cout << celsius_right << endl;
        celsius_left = celsius_left - 1.0; 
        fahrenheit_right = fahrenheit_right - 10.0;
    }

    return 0;
}