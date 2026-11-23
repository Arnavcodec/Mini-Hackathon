# Test Cases - Student Result and Grade Analyzer

## Sample Test Cases
The following test cases will be used to check the total marks, percentage, grade, and pass/fail status of students.

| Test | Marks in 5 Subjects     | Total | Percentage | Grade | Result |
| 1    | 90, 80, 65, 70, 85      | 390   | 78%        | B     |  PASS  |
| 2    | 75, 78, 68, 50, 90      | 361   | 72%        | B     |  PASS  |
| 3    | 70, 69, 80, 35, 45      | 299   | 71%        | B     |  PASS  |
| 4    | 74, 62, 84, 91, 89      | 400   | 80%        | A     |  PASS  |

## Input Validation
The program should handle the following cases:

- Marks below 0 or above 100 should not be accepted.
- The number of students should be between 1 and 30.
- Invalid menu choices should display an error message.
- If no student data has been entered, the program should ask the user to enter student details first.

## Class Topper and Average Test
Consider the following three students:

| Student | Marks in 5 Subjects | Total | Percentage | Grade |
| Riya    | 90, 80, 65, 70, 85  | 390   | 78%        |   B   |
| Ravi    | 75, 78, 68, 50, 90  | 361   | 72%        |   B   |
| Neha    | 70, 69, 80, 35, 45  | 299   | 71%        |   B   |
| Ajay    | 74, 62, 84, 91, 89  | 400   | 80%        |   A   |

**Expected Class Topper:** Ajay
**Expected Class Average Percentage:** 75.35%

## Testing Results
The program will be tested during Lab 1 to check whether the actual results match the expected results.

| Test Case        | Actual Result | Status  |
| Test 1-8         | Tested        | Done    |
| Input Validation | Tested        | Done    |
| Class Topper     | Tested        | Done    |
| Class Average    | Tested        | Done    |
