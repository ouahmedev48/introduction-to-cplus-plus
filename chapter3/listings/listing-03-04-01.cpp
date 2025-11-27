#include <iostream>
#include <random>
using namespace std;

int main() {

    // Generate two random single-digit integers
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 20);
    int number1 = dist(gen);
    int number2 = dist(gen);

    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    // Prompt the user to enter answer
    cout << "What is " << number1 << " - " << number2 << "? ";
    int answer;
    cin >> answer;
    if (number1 - number2 == answer)
        cout << "You are correct!" << endl;
    else
        cout << "Your answer is wrong. " << number1 << " - " << number2 << " should be " << (number1 - number2) << endl;
    return 0;
}

