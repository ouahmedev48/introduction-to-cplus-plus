#include <iostream>
using namespace std;

int main() {

    const double PI = 3.14159;
    double radius, length;


    // Prompt the user to enter radius and length of a circle
    cout << "Enter the radiud and length of a cylinder: ";
    cin >> radius >> length;

    // Compute the area
    double area = radius * radius * PI;

    // Compute the cylinder
    double volume = area * length;

    // Display the results
    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;

}