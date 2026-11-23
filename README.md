# Student Result and Grade Analyzer

**Mini Hackathon | C Programming Lab**

**Batch: 13**  
**Team Name: [Byte Me]**

## Problem Statement
Develop a C program to analyze the results of multiple students based on their marks in five subjects. The program will calculate total marks, percentage, and grades, determine pass/fail status, and display the class topper and class average.

## Objectives
- Accept marks for five subjects (out of 100 each) for multiple students.
- Check that the entered marks are between 0 and 100.
- Calculate total marks out of 500 and the overall percentage.
- Assign letter grades based on percentage: O, A, B, C, D, and F.
- Mark a student as FAIL if they score below 35 in any subject.
- Identify the student with the highest total marks.
- Calculate and display the class average percentage.

## Proposed Grading Rules
Percentage	Grade
90 - 100	 O
80 - 90	     A
70 - 80	     B
60 - 70	     C
35 - 60	     D
Below 35	 F

**Passing Rule:** Students must score at least 35 marks in each subject to pass. If a student scores below 35 in any subject, the overall result will be FAIL with grade F.

## Program Menu
1. Enter student details and marks
2. Display student-wise results
3. Display class topper
4. Display class average
5. Exit

## C Concepts Used
Variables, Input/Output, If-Else, Loops, Arrays, Strings, Functions, Structures.

## Calculation Logic
- Total Marks = Sum of marks in all five subjects
- Percentage = (Total Marks / 500) × 100
- Class Average = Sum of all students' percentages / Total number of students
- Class Topper = Student with the highest total marks

## How to Compile and Run

The program can be compiled and executed using GCC.

`gcc student_result.c -o student_result`
`./student_result`

For Windows, run `student_result.exe` after compiling.

## Testing
The program will be tested using different student marks to check the accuracy of total marks, percentage, grades, and pass/fail status.

Test cases include normal marks, minimum passing marks, failing marks, and invalid inputs.

Detailed test cases and results are available in [TEST_CASES.md].

## Repository Files

- `README.md` - Project overview and instructions
- `ALGORITHM.md` - Algorithm and program logic
- `TEST_CASES.md` - Sample test cases and expected results
- `TEAM_DETAILS.md` - Team members and their responsibilities
- `flowchart.png` - Flowchart of the program
- `student_result.c` - C source code
- `presentation.pptx` - Project presentation

## Algorithm
The step-by-step algorithm is available in [ALGORITHM.md].