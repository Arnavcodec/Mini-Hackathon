# Algorithm and Pseudocode

## Basic Requirements

- Maximum number of students: 30.
- Each student has five subjects, with marks ranging from 0 to 100.
- A student must score at least 35 marks in every subject to pass.
- Grades are assigned based on percentage: O, A, B, C, D, and F.
- If a student fails in any subject, the overall grade will be F.

## Algorithm

1. Start the program.
2. Display the main menu with options to enter marks, view results, display the class topper, calculate the class average, and exit.
3. Ask the user to enter the number of students (1 to 30).
4. Enter each student's name and marks in five subjects.
5. Check that all entered marks are between 0 and 100. If any mark is invalid, ask the user to enter it again.
6. Calculate the total marks by adding the marks of all five subjects.
7. Calculate the percentage by dividing the total marks by 5.
8. Check whether the student has scored at least 35 marks in every subject.
9. If any subject has marks below 35, assign grade F and mark the student as FAIL.
10. Otherwise, assign a grade according to the percentage:
    - 90% and above: O
    - 80% to below 90%: A
    - 70% to below 80%: B
    - 60% to below 70%: C
    - 35% to below 60%: D
11. Store the calculated results for each student.
12. Display the results of all students.
13. Find the student with the highest total marks and display the class topper.
14. Calculate the class average percentage.
15. Continue displaying the menu until the user selects Exit.
16. Stop the program.

## Pseudocode

START

REPEAT

    Display Main Menu
    Read choice

    IF choice == 1 THEN

    Input number of students (1 to 30)

    FOR each student

        Input student name
        total = 0
        passed = true

    FOR subject = 1 TO 5

        Input marks
        WHILE marks < 0 OR marks > 100
        Input marks again
        END WHILE

        total = total + marks

        IF marks < 35 THEN
        passed = false
        END IF

        END FOR

        percentage = total / 5.0
        IF passed == false THEN
        grade = 'F'
        status = FAIL
        ELSE
        status = PASS

        IF percentage >= 90 THEN
        grade = 'O'
        ELSE IF percentage >= 80 THEN
        grade = 'A'
        ELSE IF percentage >= 70 THEN
        grade = 'B'
        ELSE IF percentage >= 60 THEN
        grade = 'C'
        ELSE
        grade = 'D'
        END IF
        END IF
        Store student result
        END FOR

    ELSE IF choice == 2 THEN

        IF student data exists THEN
            Display student results
        ELSE
            Display "Enter student details first"
        END IF

    ELSE IF choice == 3 THEN

        IF student data exists THEN
            Find highest total marks
            Display class topper
        ELSE
            Display "Enter student details first"
        END IF

    ELSE IF choice == 4 THEN

        IF student data exists THEN
            Calculate class average percentage
            Display class average
        ELSE
            Display "Enter student details first"
        END IF

    ELSE IF choice == 5 THEN
        Display "Exiting Program"
    ELSE
        Display "Invalid Choice"
    END IF
UNTIL choice == 5
STOP

## Additional Notes

- The program should not display results, class topper, or class average until student details have been entered.
- The class topper is selected based on the highest total marks.
- If two or more students have the same highest total, all of them can be displayed as joint toppers.
- Invalid marks and menu choices should be handled properly.