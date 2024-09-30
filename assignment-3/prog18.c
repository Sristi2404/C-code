#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

// Define the structure
struct Company {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char phone[15];  // Assuming phone numbers are in a standard format
    int noOfEmployees;
};

int main() {
    struct Company company;  // Declare a variable of type Company

    // Input the values for the company
    printf("Enter the name of the company: ");
    fgets(company.name, MAX_NAME_LENGTH, stdin); // Use fgets to read string with spaces

    printf("Enter the address of the company: ");
    fgets(company.address, MAX_ADDRESS_LENGTH, stdin); // Use fgets for address

    printf("Enter the phone number of the company: ");
    fgets(company.phone, sizeof(company.phone), stdin); // Use fgets for phone number

    printf("Enter the number of employees: ");
    scanf("%d", &company.noOfEmployees);

    // Display the values
    printf("\nCompany Details:\n");
    printf("Name: %s", company.name);
    printf("Address: %s", company.address);
    printf("Phone: %s", company.phone);
    printf("Number of Employees: %d\n", company.noOfEmployees);

    return 0;
}

