#include <iostream>
#include <iomanip>

using namespace std;

// Author: Idil Gun,  Student ID: 2015719081
// This code is written as a Celcius - Fahrenheit converter
// The details of the code is explained in SWE 501 Project 1.docx

int main()
{
    // get the unit the user has
    char unit;
    cout << "Please enter the unit of your value  -  'F' for Fahrenheit and 'C' for Celsius: \n";
    cin >> unit;
    cout.precision(1);

    double temperature; // a variable for the value of temperature
    double convertedTemerature; // a variable to hold the converted temperature

    if (unit == 'C'){ // Convert Celcius to Fahrenheit

        cout << "Enter value of temperature in Celsius: \n";
        cin >> temperature;
        convertedTemerature = (temperature*9/5) + 32;
        cout << "This temperature in Fahrenheit is "<< convertedTemerature << endl;

    } else if (unit == 'F'){ // Convert Fahrenheit to Celsius

        cout << "Enter value of temperature in Fahrenheit: \n";
        cin >> temperature;
        convertedTemerature = (temperature - 32)*5/9;
        cout << "This temperature in Celsius is "<< convertedTemerature << endl;

    }else { // give a warning if wrong input is given

        cout << "The unit of temperature must be Celsius (C) or Fahrenheit (F), please restart" << endl;

    }

}
