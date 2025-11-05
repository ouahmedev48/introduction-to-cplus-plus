#include <iostream>
using namespace std;

int main() {

    // prompt the user to enter an amout
    double amount;
    cout << "Enter an amount in double, for example 11.56: ";
    cin >> amount;

    int totalCentes = static_cast<int>(amount * 100);
    cout << totalCentes << endl;

    // Find the number of dollars
    int numberOfDollars = totalCentes / 100;
    int remainingAmount = totalCentes % 100;

    // find the number of quarters
    int numberOfQuartes = remainingAmount / 25;
    remainingAmount %= 25;

    // find the number of dimes
    int numberOfDimes = remainingAmount / 10;
    remainingAmount %= 10;

    // find the number of nickels
    int numberOfNickels = remainingAmount / 5;
    remainingAmount %= 5;

    // find the number of pennies
    int numberOfPennies = remainingAmount;

    // Display the result
    cout << "Your amount " << amount << " contains of\n    ";
    cout << numberOfDollars << " dollars\n    " << numberOfQuartes << " quarters\n    " << numberOfDimes << " dimes\n    " << numberOfNickels << " nickels\n    " << numberOfPennies << " pennies\n";
    return 0;
}