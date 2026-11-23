#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STUDENTS 30
#define SUBJECTS 5

// Structure to hold individual student records
struct Student {
    char name[50];
    int marks[SUBJECTS];
    int total;
    float percentage;
    char grade;
    char status[10];
};

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students = 0;
    bool data_exists = false;
    int choice;

    printf("==================================================\n");
    printf("        STUDENTS RESULT AND GRADE ANALYSER        \n");
    printf("==================================================\n");

    do {
        // Display Main Menu
        printf("\n--- MAIN MENU ---\n");
        printf("1. Enter Student Details & Marks\n");
        printf("2. Display All Student Results\n");
        printf("3. Display Class Topper\n");
        printf("4. Display Class Average Percentage\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");

        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input! Please enter a number.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            choice = 0;
            continue;
        }

        if (choice == 1) {
            // Input number of students (1 to 30)
            do {
                printf("\nEnter number of students (1 to 30): ");

                if (scanf("%d", &num_students) != 1) {
                    printf("Invalid input! Enter a number.\n");
                    int ch;
                    while ((ch = getchar()) != '\n' && ch != EOF);
                    num_students = 0;
                    continue;
                }

                if (num_students < 1 || num_students > MAX_STUDENTS) {
                    printf("Invalid count! Please enter a number between 1 and 30.\n");
                }
            } while (num_students < 1 || num_students > MAX_STUDENTS);

            // Process each student
            for (int i = 0; i < num_students; i++) {
                printf("\n--- Entering Details for Student %d ---\n", i + 1);
                printf("Enter student name: ");
                scanf(" %49[^\n]", students[i].name);

                int total = 0;
                bool passed = true;

                // Input and validate 5 subjects
                for (int sub = 0; sub < SUBJECTS; sub++) {
                    int m;

                    printf("Enter marks for Subject %d (0-100): ", sub + 1);

                    while (scanf("%d", &m) != 1 || m < 0 || m > 100) {
                        printf("Invalid marks! Enter marks again (0-100): ");
                        int ch;
                        while ((ch = getchar()) != '\n' && ch != EOF);
                    }

                    students[i].marks[sub] = m;
                    total += m;

                    if (m < 35) {
                        passed = false;
                    }
                }

                // Calculate Percentage, Grade, and Status
                students[i].total = total;
                students[i].percentage = total / 5.0;

                if (!passed) {
                    students[i].grade = 'F';
                    strcpy(students[i].status, "FAIL");
                } else {
                    strcpy(students[i].status, "PASS");

                    if (students[i].percentage >= 90) {
                        students[i].grade = 'O';
                    } else if (students[i].percentage >= 80) {
                        students[i].grade = 'A';
                    } else if (students[i].percentage >= 70) {
                        students[i].grade = 'B';
                    } else if (students[i].percentage >= 60) {
                        students[i].grade = 'C';
                    } else {
                        students[i].grade = 'D';
                    }
                }
            }

            data_exists = true;
            printf("\nAll student records have been successfully analyzed and saved!\n");

        } else if (choice == 2) {
            if (data_exists) {
                printf("\n====================================================================\n");
                printf("%-20s %-10s %-12s %-8s %-8s\n", "Student Name", "Total", "Percentage", "Grade", "Status");
                printf("====================================================================\n");

                for (int i = 0; i < num_students; i++) {
                    printf("%-20s %-10d %-11.2f%% %-8c %-8s\n",
                           students[i].name,
                           students[i].total,
                           students[i].percentage,
                           students[i].grade,
                           students[i].status);
                }

                printf("====================================================================\n");
            } else {
                printf("\n[Error] Enter student details first!\n");
            }

        } else if (choice == 3) {
            if (data_exists) {
                // Step 1: Find the highest total marks
                int highest_marks = students[0].total;

                for (int i = 1; i < num_students; i++) {
                    if (students[i].total > highest_marks) {
                        highest_marks = students[i].total;
                    }
                }

                // Step 2: Print ALL students who achieved the highest marks
                printf("\n--- CLASS TOPPER(S) ---\n");

                for (int i = 0; i < num_students; i++) {
                    if (students[i].total == highest_marks) {
                        printf("Name       : %s\n", students[i].name);
                        printf("Total Marks: %d / 500\n", students[i].total);
                        printf("Percentage : %.2f%%\n", students[i].percentage);
                        printf("Grade      : %c (%s)\n", students[i].grade, students[i].status);
                        printf("-----------------------\n");
                    }
                }
            } else {
                printf("\n[Error] Enter student details first!\n");
            }

        } else if (choice == 4) {
            if (data_exists) {
                float total_class_percentage = 0.0;

                for (int i = 0; i < num_students; i++) {
                    total_class_percentage += students[i].percentage;
                }

                printf("\n--- CLASS ANALYTICS ---\n");
                printf("Total Students Analysed : %d\n", num_students);
                printf("Class Average Percentage: %.2f%%\n", total_class_percentage / num_students);
            } else {
                printf("\n[Error] Enter student details first!\n");
            }

        } else if (choice == 5) {
            printf("\nExiting Students Result and Grade Analyser. Goodbye!\n");

        } else {
            printf("\n[Error] Invalid Choice! Please select an option from 1 to 5.\n");
        }

    } while (choice != 5);

    return 0;
}