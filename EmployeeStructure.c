#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp ;

    printf("Enter ID, Name and Salary:\n");
    scanf("%d %s %f", &emp.id, emp.name, &emp.salary);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n Name: %s\n Salary: %.2f", emp.id, emp.name, emp.salary);

    return 0;
}
