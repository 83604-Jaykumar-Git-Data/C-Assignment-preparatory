#include <stdio.h>
#include <string.h>

struct Employee
{
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e, const char *firstName, const char *lastName, double salary)
{
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = salary;
}

void set_salary(struct Employee *e, double salary)
{
    e->monthlySalary = salary;
}

void emp_display(struct Employee *e)
{
    printf("Employee: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: Rs. %.2lf\n", e->monthlySalary);
}

int main()
{
    struct Employee emp1;
    emp_init(&emp1, "Jay", "Bansode", 10000.0);

    printf("Employee information before modification:\n");
    emp_display(&emp1);

    set_salary(&emp1, 15000.0);

    printf("\nEmployee information after modification:\n");
    emp_display(&emp1);

    return 0;
}