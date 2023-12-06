#include<iostream>
#include "mytemperature.h"
#include<iomanip>
using namespace std;

int main()
{
    cout << "Celsius    Fahrenheit        |        Fahrenheit     Celsius" << endl;

    for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
        cout << fixed << setprecision(1)
             << setw(5) << celsius << "       "
             << setw(9) << celsius_to_fah(celsius) << "        |   "
             << setw(9) << celsius + 80.0 << "       "
             << setw(9) << fahrenheit_to_cels(celsius + 80.0) << endl;
    }
    for (double fahrenheit = 110.0; fahrenheit >= 30.0; fahrenheit -= 1.0) {
        cout << fixed << setprecision(1)
            << setw(5)  << "              "
            << setw(9)  << "               |   "
            << setw(9) << fahrenheit << "       "
            << setw(9) << fahrenheit_to_cels(fahrenheit) << endl;
    }
    system("pause");
    return 0;
}

