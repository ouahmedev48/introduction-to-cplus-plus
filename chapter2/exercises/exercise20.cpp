#include <iostream>
using namespace std;

int main() {

    double x1, y1, x2, y2;
    // Prompt the user to enter the coordinates for two pints
    cout << "Enter the coordinates for two points: ";
    cin >> x1 >> y1 >> x2 >> y2;

    // Compute the slope of the line that connects two points
    double slope = (y2 - y1) / (x2 - x1);

    // Display the result
    cout << "The slope for the line that connects two points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << slope << endl;
}