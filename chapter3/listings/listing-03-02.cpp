#include <iostream>
#include <cmath>
using namespace std;

int main() {


    // Declare and initialize the constant requirements
    const double KILOGRAMS_PER_POUBD = .45359237, METERS_PER_INCHE = .0254;

    // Prompthe the user to enter the weiglt in pounds and height in inches
    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;

    cout << "Enter height in inches: ";
    double height;
    cin >> height;

    // Convert the weight int kilograms and height into meters
    double weightInKilograms = weight * KILOGRAMS_PER_POUBD;
    double heightInMeters = height * METERS_PER_INCHE;

    // Find the Body Mass Index
    double bmi = weightInKilograms / pow(heightInMeters, 2);

    // Display the BMI
    cout << "BMI is " << bmi << endl;;

    if(bmi < 18.0) {
        cout << "Underweight" << endl;
    }
    else if(bmi >= 10.5 && bmi < 25.0){
        cout << "Normal" << endl;
    }
    else if(bmi >= 25.0 && bmi < 30.0) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Obase" << endl;
    }

    return 0;
}