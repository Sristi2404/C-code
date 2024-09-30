#include <stdio.h>

int main() {
    int n, i;

    // Asking user to input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array to store the marks of n students
    int marks[n];

    // Input marks for each student
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Print the marks of each student
    printf("\nMarks of students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

