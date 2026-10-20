# Weekly Report: Multilevel Inheritance in C++

## Introduction

This week, I learned about multilevel inheritance in C++. I used a program with three classes: `Person`, `Student`, and `EngineeringStudent` to understand how inheritance works across different levels.

## How the Program Works

The `Person` class is the base class. It contains the `name` and `age` variables and a function called `displayPerson()` to display them.

The `Student` class inherits from `Person`. It adds a `studentNumber` variable and a function called `displayStudent()`.

The `EngineeringStudent` class then inherits from `Student`. It adds a `course` variable and a function called `displayEngineering()`.

In the `main()` function, an object called `engStudent` is created from the `EngineeringStudent` class. The object uses the variables and functions from all three classes to display the student's details.

## What I Learned

I learned that multilevel inheritance allows a class to inherit from another derived class. It also helps reduce code duplication because the classes can reuse variables and functions from the classes above them.

## Conclusion

This program helped me understand how multilevel inheritance works in C++. I can now see how classes can build on one another, starting with general information and adding more specific details at each level.