#include <iostream>
#include <iostream>
using namespace std;

int main() {

    // Number of seconds in one hour
    const int SECONDS_PER_HOUR = 3600;

    // Prompt the user to enter the time zone offset to GMT
    short timeZone;
    cout << "Enter the time zone offset to GMT: ";
    cin >> timeZone;

    // Convert time zone frome hour ton seconds
    timeZone *= SECONDS_PER_HOUR;

    // Obtain the number of seconds from January 1, 1970 
    int totalSeconds = time(0);
    totalSeconds += timeZone;

    // Find the current second
    int currentSecond = totalSeconds % 60;
    
    // Calculate the number of minutes
    int numberOfMinutes = totalSeconds / 60;
    int currentMinute = numberOfMinutes % 60;


    // Calculate the number of hours
    int numberOfHours = numberOfMinutes / 60;
    int currentHour = numberOfHours % 24;

    // Display the results
    cout << "The current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << endl;
    return 0;

    // 1762775444
}