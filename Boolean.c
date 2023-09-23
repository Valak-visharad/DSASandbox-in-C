#include<stdio.h>
#include<stdbool.h>
void main()
{
    bool result;
    int age, salary;
    printf("Age : ");
    scanf("%d", &age);
    printf("Salary : ");
    scanf("%d", &salary);
    result = ((age >= 18) && (salary > 10000));
    printf("result : %d", result);
}