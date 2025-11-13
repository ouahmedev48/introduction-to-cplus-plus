#include <iostream>
using namespace std;

int main() {

    const double monthlyInterestRate = 1 + 5.0 / 1200;
    // Prompt the user to enter the monthly saving amount
    double monthlySavingAmount, account = 0;
    cout << "Enter the monthly saving amount: ";
    cin >> monthlySavingAmount;

    // The account  after the first month
    account = (account + monthlySavingAmount) * monthlyInterestRate;

    // The account after the second month
    account = (account + monthlySavingAmount) * monthlyInterestRate;

    // The account after the third month
    account = (account + monthlySavingAmount) * monthlyInterestRate;

    // The account after the fourth month
    account = (account + monthlySavingAmount) * monthlyInterestRate;

    // The account after the fifth month
    account = (account + monthlySavingAmount) * monthlyInterestRate;

    // The account after the sixth month
    account = (account + monthlySavingAmount) * monthlyInterestRate;


    // Display the result
    cout << "After the sixth month, the account value is $" << static_cast<int>(100 * account) / 100.0 << endl;



}