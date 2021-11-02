#include <stdio.h>

void main()
{
 int week,hours,wage;

   printf("Enter weekday and hours : ");
   scanf("%d%d", &week,&hours);

   switch(week)
   {
     case 1:
     case 2: wage = hours * 100;
             break;
     case 3:
     case 4: wage = hours * 90;
             break;
     case 5: wage = hours * 120;
             break;
     case 6: wage = hours * 150;
             break;
     default:wage = hours * 200;
   }

   printf("Wage = %d",wage);

}
