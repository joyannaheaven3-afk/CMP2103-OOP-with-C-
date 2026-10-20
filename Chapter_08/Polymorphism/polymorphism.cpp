
#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    double salary;

public:
    Employee(double s) {
        salary = s;
    }

    // Virtual function
    virtual double calculateBonus() {
        return 0.0;
    }

    virtual ~Employee() {}
};

// Derived class for permanent employees
class PermanentEmployee : public Employee {
public:
    PermanentEmployee(double s) : Employee(s) {}

    // Override the base-class function
    double calculateBonus() override {
        return salary * 0.10;  // 10% bonus
    }
};

// Derived class for contract employees
class ContractEmployee : public Employee {
public:
    ContractEmployee(double s) : Employee(s) {}

    // Override the base-class function
    double calculateBonus() override {
        return salary * 0.05;  // 5% bonus
    }
};

int main() {
    PermanentEmployee emp1(1000000);
    ContractEmployee emp2(1000000);

    // Base-class pointer
    Employee* ptr;

    // Calculate permanent employee bonus
    ptr = &emp1;
    cout << "Permanent Employee Bonus: "
         << ptr->calculateBonus() << endl;

    // Calculate contract employee bonus
    ptr = &emp2;
    cout << "Contract Employee Bonus: "
         << ptr->calculateBonus() << endl;

    return 0;
}

