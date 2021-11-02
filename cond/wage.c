#include <stdio.h>

void main()
{
 int week,hours,wage;

   printf("Enter weekday and hours : ");
   scanf("%d%d", &week,&hours);

   if(week == 1 || week == 2)
      wage = hours * 100;
   else
    if (week == 3 || week == 4)
        wage = hours * 90;
    else
        if (week == 5)
           wage = hours * 120;
        else
            if(week == 6)
              wage = hours * 150;
            else // 7
              wage = hours * 200;

   printf("Wage = %d",wage);

}
