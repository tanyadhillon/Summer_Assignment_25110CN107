#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e;

    printf("Enter Employee ID: ");
    scanf("%d",&e.id);

    printf("Enter Employee Name: ");
    scanf("%s",e.name);

    printf("Enter Salary: ");
    scanf("%f",&e.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n",e.id);
    printf("Name: %s\n",e.name);
    printf("Salary: %.2f",e.salary);

    return 0;
}