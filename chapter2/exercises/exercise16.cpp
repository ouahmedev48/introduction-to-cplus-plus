#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Prompt the user to enter the side of a hexagon
    cout << "Enter the side: ";
    double side;
    cin >> side;

    // Calculate the area
    double area = (3 * pow(3, .5)) / 2 * pow(side, 2);

    // Display the result
    cout << "The area of the hexagon is " << area << endl;


    return 0;
}