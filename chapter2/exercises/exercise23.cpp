#include <iostream>
#include <cmath>
using namespace std;

int main() {


    double investmentAmount, annualInterestRate, numberOfYears, monthlyInterestRate;

    // Prompt the user to enter ivestment amout, annual interest rate, and number of years
    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    cout << "Enter annual interest rate: ";
    cin >> annualInterestRate;

    cout << "Enter number of years: ";
    cin >> numberOfYears;

    // Calculate the monthly interest rate
    monthlyInterestRate = annualInterestRate / 1200;

    // Calculate the future investment value
    double futureInvestmentValue = investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12); 

    // Display the result
    cout << "Accumulated value is $" << futureInvestmentValue << endl;
    return 0;
}