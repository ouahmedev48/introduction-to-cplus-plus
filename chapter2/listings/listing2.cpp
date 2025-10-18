#include <iostream>
using namespace std;

int main() {

    // Step 1: Read in radius
    double radius;
    cout << "Enter a radius: ";
    cin >> radius;
 
    // Step 2: Compute the area
    double area = radius * radius * 3.14159;

    // Step 3: Display area
    cout << "The area for circle of radius " << radius << " is " << area << endl;

}