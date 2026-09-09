// Rewrite the ascending.cpp program to process stings instead.
// So, if the user enters the values Electrical Eng., Computer Eng., Biomedical Eng.,
// the output should be Biomedical Eng., Computer Eng., Electrical Eng..
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b, c;

    cout << "Enter first engineering field: ";
    getline(cin, a);

    cout << "Enter second engineering field: ";
    getline(cin, b);

    cout << "Enter third engineering field: ";
    getline(cin, c);

    // Sort the strings in ascending order
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << "Engineering fields in ascending order:\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
