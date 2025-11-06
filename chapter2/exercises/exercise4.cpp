#include <iostream>
using namespace std;

int main() {

    // Declare and initialize constant 
    double POUND_PER_KILOGRAM = 0.454;

    // Prompt the user to enter a number in pounds
    double pounds;
    cout << "Enter a number in pounds: ";
    cin >> pounds;

    // Convert pounds into kilograms
    double numberOfKilograms = pounds * POUND_PER_KILOGRAM;

    // Display the result
    cout << pounds << " pounds is " << numberOfKilograms << " Kilogram" << endl;
    return 0;
}