// program to calculate net salary of an employee

#include <stdio.h>

void main()
{
  int salary, hra, da, incometax, gross_salary, netsalary;

    printf("Salary per month :");
    scanf("%d", &salary);

    hra = salary * 30 / 100;      // house rent allowance per month
    da = salary * 20 / 100;       // dearness allowance per month

    gross_salary = salary + hra + da;
    incometax =  gross_salary * 12 / 100;
    netsalary= gross_salary - incometax;

    printf("Basic Salary     %8d\n",salary);
    printf("+ HRA            %8d\n",hra);
    printf("+ DA             %8d\n",da);
    printf("                 --------\n");
    printf("Gross Salary     %8d\n",gross_salary);
    printf("- IT             %8d\n", incometax);
    printf("                 --------\n");
    printf("Net Salary       %8d\n",netsalary);
}
