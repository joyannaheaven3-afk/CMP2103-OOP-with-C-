
#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Setter functions
    void setWidth(double w) {
        width = w;
    }

    void setLength(double l) {
        length = l;
    }

    // Getter functions
    double getWidth() {
        return width;
    }

    double getLength() {
        return length;
    }

    // Function to calculate area
    double calculateArea() {
        return width * length;
    }

    // Function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // Create the first Rectangle object
    Rectangle r1;

    r1.setWidth(5);
    r1.setLength(3);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Area: " << r1.calculateArea() << endl;
    cout << "Perimeter: " << r1.calculatePerimeter() << endl;

    cout << endl;

    // Create the second Rectangle object
    Rectangle r2;

    r2.setWidth(8);
    r2.setLength(4);

    cout << "Rectangle 2" << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Length: " << r2.getLength() << endl;
    cout << "Area: " << r2.calculateArea() << endl;
    cout << "Perimeter: " << r2.calculatePerimeter() << endl;

    return 0;
}
