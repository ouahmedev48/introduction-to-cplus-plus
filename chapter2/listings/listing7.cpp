#include <iostream>
using namespace std;

int main() {


    int seconds;
    cout << "Enter an integer for seconds: ";
    cin >> seconds;

    // Obtain minutes
    int minutes = seconds / 60;

    // Find seconds
    int remainingSeconds = seconds % 60;

    // Display the result
    cout << seconds << " seconds is " << minutes << " minutes and " << remainingSeconds << " seconds" << endl;
    return 0;
}