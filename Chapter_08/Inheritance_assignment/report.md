# Weekly Report: Inheritance in C++

## Introduction

This week, I looked at how inheritance is used in C++ through a student management program. The program has three classes: `Student`, `UniversityStudent`, and `HighschoolStudent`.

## How Inheritance Was Used

The `Student` class is the base class. It contains the common information shared by all students, which is their name and age. It also has a function called `Studentdisplay()` that displays this information.

The `UniversityStudent` and `HighschoolStudent` classes inherit from the `Student` class.

The `UniversityStudent` class adds information about the student's year of study, course, and student number. The `HighschoolStudent` class adds the student's current class and index number.

Both classes reuse the name, age, and display function from the `Student` class. This is an example of inheritance because the derived classes use features from the base class without having to write the same code again.

## Class Diagram

I have drawn the class diagram on paper to show the `Student` class and the two classes that inherit from it. The diagram shows their member variables, member functions, access specifiers, and inheritance relationships.

I have included a photo of the class diagram in the same folder as this report.

## Conclusion

From this program, I learned that inheritance helps us reuse code and organize related classes. It allows different types of students to share common information while having their own additional details.
