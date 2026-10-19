// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <iostream>
using namespace std;

int main() {
    long long population = 312032486;
    const int secondsPerYear = 365 * 24 * 60 * 60;

    for (int year = 1; year <= 5; year++) {
        population += secondsPerYear / 7;
        population -= secondsPerYear / 13;
        population += secondsPerYear / 45;

        cout << "Year " << year << ": "
             << population << endl;
    }

    return 0;
}

