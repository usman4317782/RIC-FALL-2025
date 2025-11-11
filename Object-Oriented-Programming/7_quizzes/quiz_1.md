# University Entity Management System (C++ OOP Exercise)

## Problem Statement: Simple University Structure

This exercise focuses on applying fundamental C++ Object-Oriented Programming (OOP) concepts: **inheritance**, **constructors**, and **data members**. Your task is to design and implement a basic C++ program that models core university entities.

**Goal:** Create a simple class hierarchy for university people and a standalone class for courses.

**Requirements (to be completed in ~45 minutes):**

1.  **Base Class: `Person`**
    *   Define a class named `Person`.
    *   It must have `private` **data members**: `string name` and `int id`.
    *   Implement a **constructor** that takes `name` and `id` as arguments and initializes these data members.
    *   Add a `public` method `displayPersonInfo()` to print the person's `name` and `id`.

2.  **Derived Class: `Student`**
    *   Create a class named `Student` that **inherits** from `Person`.
    *   It must have `private` **data members**: `string major` and `double gpa`.
    *   Implement a **constructor** that takes `name`, `id`, `major`, and `gpa` as arguments. This constructor **must call the `Person` class's constructor** to initialize `name` and `id`.
    *   Add a `public` method `displayStudentInfo()` to print all student details (including inherited person info).

3.  **Derived Class: `Faculty`**
    *   Create a class named `Faculty` that **inherits** from `Person`.
    *   It must have a `private` **data member**: `string department`.
    *   Implement a **constructor** that takes `name`, `id`, and `department` as arguments. This constructor **must call the `Person` class's constructor** to initialize `name` and `id`.
    *   Add a `public` method `displayFacultyInfo()` to print all faculty details (including inherited person info).

4.  **Standalone Class: `Course`**
    *   Define a class named `Course`.
    *   It must have `private` **data members**: `string courseCode`, `string title`, and `int credits`.
    *   Implement a **constructor** that takes `courseCode`, `title`, and `credits` as arguments and initializes these data members.
    *   Add a `public` method `displayCourseInfo()` to print the course `code`, `title`, and `credits`.

5.  **`main` Function:**
    *   In your `main` function, create at least one object of `Student`, `Faculty`, and `Course`.
    *   Call their respective display methods to show the created objects' information.

---

### Outcomes: Understanding C++ OOP Concepts

Successfully completing this exercise will help you understand the core principles of OOP in C++:

1.  **Inheritance:**
    *   **What you learn:** You'll see how `Student` and `Faculty` classes automatically get properties (`name`, `id`) and behaviors (`displayPersonInfo`) from the `Person` class without rewriting code. This saves time and makes your code cleaner and easier to manage. If you need to change how a `Person`'s `id` works, you only change it in one place (`Person` class), and all derived classes benefit.

2.  **Constructors:**
    *   **What you learn:** Constructors are special functions that run when you create an object (e.g., `Student s("Alice", 101, "CS", 3.8);`). They ensure that all the object's initial values are set correctly. For derived classes like `Student` and `Faculty`, you'll specifically practice how their constructors call the base class (`Person`) constructor to make sure inherited parts are also initialized properly. This helps prevent errors by always starting objects in a valid state.

3.  **Data Members (with Encapsulation):**
    *   **What you learn:** You'll use `private` **data members** (like `name`, `id`, `major`, `gpa`). This means these attributes can only be directly accessed from *inside* their own class. To get or change them from outside, you use `public` methods (like `displayPersonInfo()`). This concept, called **encapsulation**, protects the data from accidental misuse and allows you to control how it's interacted with, leading to more robust and secure code.