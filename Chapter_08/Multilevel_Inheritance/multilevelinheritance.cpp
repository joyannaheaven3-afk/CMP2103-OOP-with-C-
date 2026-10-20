
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    string studentNumber;

    void displayStudent() {
        cout << "Student Number: " << studentNumber << endl;
    }
};

// Further derived class
class EngineeringStudent : public Student {
public:
    string course;

    void displayEngineering() {
        cout << "Course: " << course << endl;
    }
};

int main() {
    EngineeringStudent engStudent;

    engStudent.name = "Joy";
    engStudent.age = 21;
    engStudent.studentNumber = "25/U/0001";
    engStudent.course = "Electrical Engineering";

    engStudent.displayPerson();
    engStudent.displayStudent();
    engStudent.displayEngineering();

    return 0;
}
