#include <iostream>
using namespace std;

int main() {

    int amount;
    // Prompt the user to enter an amount in cents
    cout << "Enter an amount in cents for example 1156: ";
    cin >> amount;

    //Number of dollars
    int numberOfDollars = amount / 100;
    int remainingAmount = amount % 100;

    // Number of quarters
    int numberOfQuarters = remainingAmount / 25;
    remainingAmount %= 25;

    // Number of dimes
    int numberOfDimes = remainingAmount / 10;
    remainingAmount %= 10;

    // Number of nickels
    int numberOfNickels = remainingAmount / 5;
    remainingAmount %= 5;

    // Number of pennies
    int numberOfPennies = remainingAmount;

    // Display the result
    cout << amount << " cents contains \n   " << numberOfDollars << " dollars\n   " << numberOfQuarters << " quarters\n   "
         << numberOfDimes << " dimes\n   " << numberOfNickels << " nickels\n   " << numberOfPennies << " pennies\n";


    return 0;
}