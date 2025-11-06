#include <iostream>
using namespace std;

int main() {

    // Prompt the user to enter an integer between 0 and 100
    int number;
    cout << "Enter a number between 0 and 1000: ";
    cin >> number;

    // Obtain the number of ones
    int numberOfOnes = number % 10;
    
    // Obtain the number of tens
    int numberOfTens = number / 10 % 10;

    // Obtain the number of hundreds
    int numberOfHundreds = number / 100;

    // The sum of the digits
    int sumOfDigits = numberOfOnes + numberOfTens + numberOfHundreds;
    // Display the result
    cout << "The sum of the digits is " << sumOfDigits << endl;
    return 0;
}