#include <iostream>
using namespace std;

int main() {

    cout << "The size of int: " << __SIZEOF_INT__ << endl;
    cout << "The size of long: " << __SIZEOF_LONG__ << endl;
    cout << "The size of long long:" << __SIZEOF_LONG_LONG__ << endl;
    cout << "The size of float: " << __SIZEOF_FLOAT__ << endl;
    cout << "The size of double: " << __SIZEOF_DOUBLE__ << endl;
    cout << "The size of long double: " << __SIZEOF_LONG_DOUBLE__ << endl; 
    return 0;
}