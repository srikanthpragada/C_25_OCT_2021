#include <stdio.h>

void main()
{
 int start,end, total = 0;

     printf("Enter start and end : ");
     scanf("%d%d",&start,&end);

     while(start <= end)
     {
         total = total + start;
         start ++;
     }

     printf("Total = %d", total);
}
