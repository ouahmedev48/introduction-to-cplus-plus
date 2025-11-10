#include <iostream>
using namespace std;

int main() {

    // Prompt the user to enter the number of minutes 
    int totalMinutes;
    cout << "Enter the number of minutes: 1000000000 ";
    cin >> totalMinutes;

    // Calculate the number of minutes in one year
    int minutesInYear = 365 * 24 * 60;

    // Calculate the number of minutes in one day
    int minutesInDay = 24 * 60;

    // Find the number of years
    int numberOfyears = totalMinutes / minutesInYear;

    // Find the number of days
    int numberOfDays = totalMinutes % minutesInYear / minutesInDay;

    cout << totalMinutes << " minutes is approximately " << numberOfyears << " years and " << numberOfDays << " days" << endl;


    return 0;
}