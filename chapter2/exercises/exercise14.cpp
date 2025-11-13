#include <iostream>
#include <cmath>
using namespace std;

int main() {


    // Declare and initialige the constants
    const double POUND_PER_KILOGRAMS = .45359237;
    const double INCHE_PER_METERS = .0254;

    // Declare the variables
    double weight, height;

    // Prompt the user to enter weight in pounds and height in inches
    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter length in inches: ";
    cin >> height;

    // Convert weight into kilograms and height in meters
    double weightInKilograms = weight * POUND_PER_KILOGRAMS;
    double heightInMeters = height * INCHE_PER_METERS;

    // Compute the BMI
    double bmi = weightInKilograms / pow(heightInMeters, 2);

    // Dispaly the result
    cout << "BMI is " << bmi << endl;


    return 0;
}