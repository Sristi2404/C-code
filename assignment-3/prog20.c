#include <stdio.h>

#define MAX_STUDENTS 12  // Define the total number of students

// Define a structure for student details
struct Student {
    int rollNo;           // Roll number of the student
    char name[50];        // Name of the student
    char address[100];    // Address of the student
    int age;              // Age of the student
    float marks;          // Marks of the student
};

// Function to display the student details
void displayStudentDetails(struct Student students[]) {
    printf("\nStudent Details:\n");
    printf("------------------------------------------------\n");
    printf("RollNo  Name          Address       Age   Marks\n");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%-7d %-13s %-12s %-4d %.2f\n", students[i].rollNo, students[i].name, students[i].address, students[i].age, students[i].marks);
    }
    printf("------------------------------------------------\n");
}

int main() {
    struct Student students[MAX_STUDENTS];  // Array to store student details

    // Input details for each student
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Address: ");
        scanf("%s", students[i].address);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }

    // Display the details of the students
    displayStudentDetails(students);

    return 0;
}



