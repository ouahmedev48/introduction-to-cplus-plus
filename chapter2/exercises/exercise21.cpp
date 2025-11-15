#include <iostream>
using namespace std;

int main() {

    double drivingDistance, milesPerGallon, pricePerGallon;
    
    // Prompt the user to enter driving distance, miles per gallon, and price per gallon
    cout << "Enter the driving distance: ";
    cin >> drivingDistance;

    cout << "Enter the miles per gallon: ";
    cin >> milesPerGallon;

    cout << "Enter the price pre gallon: ";
    cin >> pricePerGallon;

    // Calculate the cost of driving
    double costOfDriving = (drivingDistance / milesPerGallon) * pricePerGallon;

    // Display the result
    cout << "The cost of driving is $" << static_cast<int>(costOfDriving *100) / 100.0 << endl;




}