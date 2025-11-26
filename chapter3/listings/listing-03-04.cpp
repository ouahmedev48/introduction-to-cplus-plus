#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {

    // Generate two random single-digit integers
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = number1;
    }

    // Prompt the user to enter answer
    cout << "What is " << number1 << " - " << number2 << "? ";
    int answer;
    cin >> answer;

    if (number1 - number2 == answer)
        cout << "You are correct" << endl;
    else
        cout << "Your answer is wrong." << number1 << " - " << number2 << " should be " << (number1 - number2) << endl;



    return 0;
}