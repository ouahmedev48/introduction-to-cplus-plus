#include <iostream>
using namespace std;

int main() {

    const int SECONDS_PER_YEAR = 365 * 24 * 60 * 60;
    int numberOfYears, birthsPerYear, deathsPerYear, immigrantsPerYear, peopleAddedPerYear, totalPeopleAdded;
    int currentPeopelation = 312032486;

    // Prompt the user to enter the number of years
    cout << "Enter the number of years: "; 
    cin >> numberOfYears;

    // number of births per year
    birthsPerYear = SECONDS_PER_YEAR / 7;

    // Number of deaths per year
    deathsPerYear = SECONDS_PER_YEAR / 13;

    // Number of immigrants per year
    immigrantsPerYear = SECONDS_PER_YEAR / 45;

    // Calculate the people added per year
    peopleAddedPerYear = birthsPerYear + immigrantsPerYear - deathsPerYear;

    // Calculate the total people added
    totalPeopleAdded = peopleAddedPerYear * numberOfYears;

    // Calculate the new peopelation
    int newPeopelation = currentPeopelation + totalPeopleAdded;

    // Display the result
    cout << "The peopelation in " << numberOfYears << " years is " << newPeopelation << endl;

    return 0;
}