#include <iostream>
using namespace std;

int main() {

    double balance, annualInterestRate;

    // Prompt the user to enter the balance and annual interest rate
    cout << "Enter the balance and interest rate (e.g., 3 for 3%): ";
    cin >> balance >> annualInterestRate;

    // Calculate the monthly interest rate
    double monthlyInterestRate = annualInterestRate  / 1200;

    // Calculate the interest
    double interest = balance * monthlyInterestRate;

    // Display the result
    cout << "The interest is " << interest << endl;
    return 0;
}