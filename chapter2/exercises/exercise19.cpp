#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x1, y1, x2, y2, x3, y3;
    // Prompt the user to enter three points for a triangle
    cout << "Enter three points for a triangle: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Find the length of side1
    double side1 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), .5);

    // Find the length of side2
    double side2 = pow(pow(x3 - x2, 2) + pow(y3 - y2, 2), .5);

    // Find the length of side3
    double side3 = pow(pow(x1 - x3, 2) + pow(y1 - y3, 2), .5);

    double s = (side1 + side2 + side3) / 2;

    // Compute the area of triangle
    double area = pow(s * (s - side1) * (s - side2) * (s - side3), .5);

    // Display the result
    cout << "The area of triangle is " << area << endl;
    return 0;
}