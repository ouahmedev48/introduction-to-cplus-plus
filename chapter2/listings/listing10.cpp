#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Prompt the user to enter the input requirements
    double loanAmount, annualyInterestRate;
    int numberOfYears;

    cout << "Enter annual interest rate, for example 7.25: ";
    cin >> annualyInterestRate;

    cout << "Enter number of years, for example 5: ";
    cin >> numberOfYears;

    cout << "Enter loan amount, for example 120000.95: ";
    cin >> loanAmount;

    double monthlyInterestRate = annualyInterestRate / 1200;

    double monthlyPayment = monthlyInterestRate * loanAmount / (1 - (1 / (pow(1 + monthlyInterestRate, numberOfYears * 12))));

    double totalPayment = monthlyPayment * numberOfYears * 12;

    // Display the results
    cout << "The monthly payment is " << static_cast<int>(100 * monthlyPayment) / 100.0 << endl;
    cout << "The total payment is " << static_cast<int>(100 * totalPayment) / 100.0 << endl;


}