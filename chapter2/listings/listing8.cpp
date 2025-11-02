#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    // Prompt the user to enter a fahrenheit degree
    cout << "Enter a degree in Fahrenheit: ";
    cin >> fahrenheit;

    // Obtain a celsius degree
    double celsius = 5.0 / 9 * (fahrenheit - 32);

    // Display the result
    cout << "Fahrenheit " << fahrenheit << " is " << celsius << " Celsius" << endl;
    return 0;
}