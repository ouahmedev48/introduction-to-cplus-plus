#include <iostream>
using namespace std;

int main() {


    // Prompt the user to enter a celsius degree in a double value
    double celsius;
    cout << "Enter a celsius degree in a double value: ";
    cin >> celsius;

    // Convert celsius degree int fahrenheit 
    double fahrenheit = 9 / 5.0 * celsius + 32;

    // Display the result
    cout << "Celsius " << celsius << " is " << "Fahrenheit " << fahrenheit << endl;;

    return 0;
}