#include <stdio.h>

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int i, j;
    struct Employee employees[3]; // Array of 3 Employee structures
    struct Employee temp; // Temporary structure for swapping

    // Input details for 3 employees
    for (i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name); // Read name (no spaces)
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort the employees by salary in ascending order using bubble sort
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3 - i - 1; j++) {
            if (employees[j].salary > employees[j + 1].salary) {
                // Swap the structures
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    // Display the sorted list of employees
    printf("\nEmployee details sorted by salary:\n");
    printf("ID\tName\tSalary\n");
    for (i = 0; i < 3; i++) {
        printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}
