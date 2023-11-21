#include <stdio.h>
struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};
struct Employee increaseSalary(struct Employee employee) {
    if (employee.hours_worked >= 12) {
        employee.salary += 150.0;
    } else if (employee.hours_worked >= 10) {
        employee.salary += 100.0;
    } else if (employee.hours_worked >= 8) {
        employee.salary += 50.0;
    }
    return employee;
}

int main() {
    struct Employee employees[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_worked);
        employees[i] = increaseSalary(employees[i]);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s, Final Salary: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
