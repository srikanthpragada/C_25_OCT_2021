// program to calculate net salary of an employee

#include <stdio.h>

void main()
{
  int salary, hra, da, incometax, gross_salary, netsalary;

    printf("Salary per month :");
    scanf("%d", &salary);

    hra = salary * 30 / 100; // house rent allowance per month
    da = salary * .20;       // dearness allowance per month

    gross_salary = salary + hra + da;
    incometax =  gross_salary * .12;
    netsalary= gross_salary - incometax;

    printf("Net Salary = %d\n", netsalary);

}
