#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Prompt the user to enter the speed and acceleration
    double speed, acceleration;
    cout << "Enter speed and acceleration: " ;
    cin >> speed >> acceleration;

    // Calculate the runway length
    double length = pow(speed, 2) / (acceleration * 2);

    // Display the result
    cout << "The minimum runway length for this airplan is " << length << endl;
    return 0;
}
