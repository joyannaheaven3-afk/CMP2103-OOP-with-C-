
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int status;
    double income, tax = 0;

    cout << "(0-Resident, 1-Non-resident)" << endl;
    cout << "Enter the residence status: ";
    cin >> status;

    cout << "Enter the taxable income: ";
    cin >> income;

    if (status == 0) {
        if (income <= 2820000) {
            tax = 0;
        } else if (income <= 4020000) {
            tax = (income - 2820000) * 0.10;
        } else if (income <= 4920000) {
            tax = 120000 + (income - 4020000) * 0.20;
        } else if (income <= 120000000) {
            tax = 300000 + (income - 4920000) * 0.30;
        } else {
            tax = 300000
                + (120000000 - 4920000) * 0.30
                + (income - 120000000) * 0.10;
        }
    } else if (status == 1) {
        if (income <= 4020000) {
            tax = income * 0.10;
        } else if (income <= 4920000) {
            tax = 402000 + (income - 4020000) * 0.20;
        } else if (income <= 120000000) {
            tax = 582000 + (income - 4920000) * 0.30;
        } else {
            tax = 582000
                + (120000000 - 4920000) * 0.30
                + (income - 120000000) * 0.10;
        }
    } else {
        cout << "Invalid residence status." << endl;
        return 1;
    }

    cout << fixed << setprecision(0);
    cout << "Tax is " << tax << endl;

    return 0;
}
