#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double temperature, speed;

    // Prompt the user to enter the outside temperature
    cout << "enter the temperature in fahrenheit: ";
    cin >> temperature;

    // Prompt the user to enter the wind speed
    cout << "Enter the wind speed in miles per hour: ";
    cin >> speed;

    // Calculate the wind chill index
    double windChillIndex = 35.74 + (.6215 * temperature) - (35.75 * pow(speed, .16)) + (.4275 * temperature * pow(speed, .16));

    // Display the result
    cout << "The wind chill index is " << windChillIndex << endl;

    return 0;
}