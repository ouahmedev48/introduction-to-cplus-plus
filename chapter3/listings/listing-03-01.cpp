#include <iostream>
using namespace std;

int main() {

    // Prompt the user to enter an integer number
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    if(number %2 == 0) {
        cout << "Hi Even" << endl;
    }
        

    if(number %5 == 0) {
        cout << "Hi Five" << endl;
    }
    return 0;
}