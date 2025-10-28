#include <iostream>
using namespace std;

int main() {
    double number1, number2, number3;

    // Prompt the user to enter three numbers
    cout << "Enter three number: ";
    cin >> number1 >> number2 >> number3;

    // Compute average
    double average = (number1 + number2 + number3) / 3;

    // Display the result
    cout << "The average of " << number1 << " " << number2 << " " << number3 << " is " << average << endl;
}