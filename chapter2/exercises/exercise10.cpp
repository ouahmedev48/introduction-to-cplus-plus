#include <iostream>
using namespace std;

int main() {

    double amountOfWater, initialTemperature, finalTemperature;

    // Prompt the user to enter the amount of water, initial temperature, and final temperature
    cout << "Enter the amount of water in kilograms: ";
    cin >> amountOfWater;

    cout << "Enter the initial temperature: ";
    cin >> initialTemperature;

    cout << "Enter the final temperature: ";
    cin >> finalTemperature;

    // Calculate the energy nedded
    double energy = amountOfWater * (finalTemperature - initialTemperature) * 4184;

    // Display the result
    cout << "The energy nedded is " << energy << endl;
    return 0;
}