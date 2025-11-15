#include <iostream>
using namespace std;
int main() {

    double amount;
    // Prompt the user to enter an amount in double
    cout << "Enter an amount in double, for example 11.56: ";
    cin >> amount;

    int remainingAmount = static_cast<int>(amount * 100);

    // Find the number of one dollars
    int numberOfDollars = remainingAmount / 100;
    remainingAmount %= 100;

    // Find the number of quarters in remaining amount
    int numberOfQuarters = remainingAmount / 25;
    remainingAmount %= 25;

    // Find the number of dimes in remaining amount
    int numberOfDimes = remainingAmount / 10;
    remainingAmount %= 10;

    // Find the number of nickels in remaining amount
    int numberOfNickels = remainingAmount / 5;
    remainingAmount %= 5;

    // Find the number og pennies
    int numberOfPennies = remainingAmount;

    // Display the result
    cout << "Your amount " << amount << " consists of" << endl <<
      "   " << numberOfDollars << " dollars" << endl <<
      "   " << numberOfQuarters << " quarters" << endl << 
      "   " << numberOfDimes << " dimes" << endl <<
      "   " << numberOfNickels << " nickels" << endl << 
      "   " << numberOfPennies << " pennies" << endl;


    return 0;
}