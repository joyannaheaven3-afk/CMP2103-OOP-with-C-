# Weekly Report: Polymorphism in C++

## Introduction

This week, I learned how polymorphism works in C++ using an employee bonus program. The program shows how different types of employees can use the same function but produce different results.

## How Polymorphism Was Implemented

The program has three classes: `Employee`, `PermanentEmployee`, and `ContractEmployee`.

The `Employee` class is the base class. It contains a `salary` data member and a virtual function called `calculateBonus()`.

The `PermanentEmployee` class inherits from `Employee` and overrides `calculateBonus()` to calculate a bonus of 10% of the salary.

The `ContractEmployee` class also inherits from `Employee`, but its version of `calculateBonus()` calculates a bonus of 5% of the salary.

A base-class pointer called `ptr` is used to point to objects of both derived classes. When the function is called through this pointer, C++ executes the version that belongs to the object being pointed to.

The `virtual` keyword enables runtime polymorphism, while `override` shows that the derived-class functions are overriding the virtual function in the base class.

## What I Learned

I learned that polymorphism allows the same function call to produce different results depending on the object. It also makes a program more flexible because new employee types can have their own bonus calculations while sharing a common interface.

## Conclusion

This program helped me understand runtime polymorphism in C++. By using virtual functions, function overriding, and a base-class pointer, different employee types can calculate their bonuses in different ways.