#include <iostream>
using namespace std;

int main() {

    // Declare and initialize a constant
    const double FEET_PER_METER = .305;

    // Prompt the user to enter a value for feet
    double feet;
    cout << "Enter a value for feet: ";
    cin >> feet;

    // Convert feet into meter
    double meters = feet * FEET_PER_METER;

    //Display the result
    cout << feet << " feet is " << meters << " meters" << endl;
}