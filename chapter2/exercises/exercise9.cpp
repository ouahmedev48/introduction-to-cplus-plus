#include <iostream>
using namespace std;

int main() {

    double startingVelocity , endingVelocity, timeSpan;
    // Prompt the user to enter starting velocity, ending velocity, and time span
    cout << "Enter starying velocity, ending velocity, and time span: ";
    cin >> startingVelocity >> endingVelocity >> timeSpan;

    // Calculate the average acceleration
    double averageAcceleration = (endingVelocity - startingVelocity) / timeSpan;

    // Display the result
    cout << "The average acceleration is " << averageAcceleration << endl;
    return 0;
}