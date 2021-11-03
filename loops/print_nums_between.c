#include <stdio.h>

void main()
{
 int start,end;

     printf("Enter start and end : ");
     scanf("%d%d",&start,&end);

     while(start <= end)
     {
         printf("%d\n",start);
         start ++;
     }

}
