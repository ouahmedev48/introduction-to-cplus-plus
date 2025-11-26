#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Prompt the user to enter weight in pounds
    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;

    // Prompt the user to enter height in inches
    cout << "Enter height in inches: ";
    double height;
    cin >> height;

    const double KILOGRAMS_PER_POUND = 0.45359237;  // contant
    const double METERS_PER_INCHE = 0.0254;         // constant

    // Compute BMI
    double weightInKiligram = weight * KILOGRAMS_PER_POUND;
    double heigthInMeter = height * METERS_PER_INCHE;

    double bmi = weightInKiligram / pow(heigthInMeter, 2);

    // Display the result
    cout << "BMI is " << bmi << endl;

    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obase" << endl;
    return 0;
}