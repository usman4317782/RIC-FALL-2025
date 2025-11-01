# Python Fundamentals: Mini-App Development Assignment

**Course:** Introduction to Python Programming  
**Assignment:** Build a Simple Command-Line "Daily Task Planner" App  
**Time Limit:** 1 Hour

---

## Instructions for Students

1.  Read the entire assignment carefully before writing any code.
2.  You will build a small, command-line application step-by-step.
3.  Write your Python code in a single script file (e.g., `planner_app.py`).
4.  After the coding tasks, you must answer the "Written Outcomes" questions based on the app you built.
5.  This assignment is designed to test your practical understanding of core Python concepts within a one-hour timeframe.

---

## Scenario: The "Daily Task Planner" App

You are building a prototype for a simple application that helps a user plan their most important tasks for the day. The app will welcome the user, ask for their main goal, list out the steps to achieve it, and estimate the total time required.

---

## Part 1: Practical App-Building Tasks (40 minutes)

### Task 1: Application Setup and Welcome (Comments, Output, Strings)

*   At the very top of your script, add a single-line **comment** with your name and today's date.
*   Below the comment, write a `print()` statement to display a friendly welcome message, like `--- Welcome to Your Daily Task Planner ---`.
*   Ask the user for their name using the `input()` function and store it in a variable.
*   Display a personalized greeting using their name. For example: `Hello, Alex! Let's plan your day.`

### Task 2: Defining the Main Goal (Input, Strings)

*   Prompt the user to enter their single most important goal for the day (e.g., "Finish my Python assignment").
*   Store this goal in a variable.
*   Confirm the goal back to the user by printing a message like: `Excellent! Your main goal is: Finish my Python assignment.`

### Task 3: Breaking Down the Goal (Lists)

*   Create an empty **list** to store smaller, actionable tasks.
*   Ask the user to enter three small tasks that will help them achieve their main goal. For each task they enter, add it to the list.
*   After adding all three tasks, print the entire list to show the user their plan.

### Task 4: Estimating Time (Input, Casting, Operators)

*   Now, ask the user to estimate how many minutes each of the three tasks will take. You will need to ask them three separate times.
*   The `input()` function will give you strings. You must **cast** each of these inputs into an integer.
*   Use the addition `+` **operator** to sum the time required for all three tasks.
*   Print the total estimated time in a clear message, like `Total estimated time to complete your goal is: 60 minutes.`

### Task 5: Providing Feedback (If-Else, Operators)

*   Now, you'll give the user some feedback based on their total estimated time.
*   Use an **if-else** statement to check if the total time is greater than 90 minutes.
*   **If** the total time is greater than 90, print a message like: `This is an ambitious plan! Make sure you stay focused.`
*   **Else** (if the time is 90 minutes or less), print an encouraging message like: `Great! That's a very manageable plan.`

---

## Part 2: Written Outcomes (20 minutes)

Based on the "Daily Task Planner" app you just built, please answer the following questions clearly and concisely in a separate file (e.g., `outcomes.md`).

#### Question 1: Input and Data Types
In Task 4, you asked the user for the time in minutes.
*   What data type did the `input()` function return?
*   Explain why you had to use **casting** before you could calculate the sum of the minutes.

#### Question 2: String Manipulation
In Task 1 and Task 2, you combined text and variables to create messages.
*   Explain how you used the `+` **operator** with **strings** to create a personalized welcome message.
*   Is this the same way the `+` operator works with numbers? Briefly explain the difference.

#### Question 3: Using Lists
In Task 3, you stored the user's smaller tasks in a **list**.
*   Why was a list a suitable choice for storing these tasks compared to using separate variables for each one?
*   How did you add new items to the list?

#### Question 4: Conditional Logic
The **if-else** statement in Task 5 allowed your app to make a decision.
*   What was the specific condition your `if-else` statement was checking?
*   Explain how this conditional logic made your application "smarter" or more interactive for the user.

---

## Submission Guidelines

*   Create a new GitHub repository for this assignment.
*   Add your Python script file (e.g., `planner_app.py`) to the repository.
*   Add a separate Markdown file (e.g., `outcomes.md`) with your answers to the "Written Outcomes" section.
*   Ensure this `README.md` file is included in the repository.
*   Submit the link to your GitHub repository.```