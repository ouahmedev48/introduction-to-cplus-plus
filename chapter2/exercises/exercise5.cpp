#include <iostream>
using namespace std;

int main() {

    // Prompt the enter subtotal and gratuity rate
    double subtotal, gratuityRate;
    cout << "Enter subtotal and gratuity rate: " ;
    cin >> subtotal >> gratuityRate;

    // Find the gratuity
    double gratuity = subtotal * (gratuityRate / 100);

    // Find the total
    double total = subtotal + gratuity;

    // Dispaly the result

    cout << "The gratuity is $" << gratuity << " and total is $" << total << endl; 
    return 0;
}