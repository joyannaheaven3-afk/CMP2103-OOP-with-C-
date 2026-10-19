// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    string firstName, lastName, program, academicYear;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cin.ignore();

    cout << "Enter your study program: ";
    getline(cin, program);

    cout << "Enter the academic year (e.g. 2027/2028): ";
    getline(cin, academicYear);

    time_t now = time(0);
    tm *currentDate = localtime(&now);

    int day = currentDate->tm_mday;
    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int month = currentDate->tm_mon;
    int year = currentDate->tm_year + 1900;

    string suffix = "th";
    if (day % 100 < 11 || day % 100 > 13) {
        if (day % 10 == 1) suffix = "st";
        else if (day % 10 == 2) suffix = "nd";
        else if (day % 10 == 3) suffix = "rd";
    }

    cout << "\nDate: " << day << suffix << " "
         << months[month] << " " << year << "\n\n";

    cout << "To: " << firstName << " " << lastName << ",\n\n";
    cout << "Dear " << firstName << ",\n\n";

    cout << "CONGRATULATIONS! We are pleased to inform you that "
         << "the Makerere University Admissions Board has approved "
         << "your application for admission to the "
         << academicYear << " academic year.\n\n";

    cout << "You have been offered a place for the following course:\n";
    cout << "PROGRAM: " << program << "\n\n";

    cout << "As a student of Makerere University, you will be part "
         << "of a historic institution dedicated to academic "
         << "excellence and innovation. Please report to the Academic "
         << "Registrar's office with your original academic documents "
         << "for verification during orientation week.\n\n";

    cout << "We look forward to welcoming you to Makerere University.\n\n";
    cout << "Yours sincerely,\n\n\n";
    cout << "John Doe\n";
    cout << "Registrar\n";

    return 0;
}
