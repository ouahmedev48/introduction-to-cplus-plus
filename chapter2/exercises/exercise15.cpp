#include <iostream>
#include <cmath>
using namespace std;
int main() {

    double x1, y1, x2, y2;
    // Prompt the user to enter the coordinates of two point (x1, y1) and (x2, y2)
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    // Find the distance between the two points
    long double distance = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);

    // Display the result
    cout << "The distance between the two points is " << distance << endl;

    return 0;
}