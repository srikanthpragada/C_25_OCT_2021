#include <stdio.h>

void main()
{
 int i,n, found = 0;

     printf("Enter a number :");
     scanf("%d",&n);

     for(i = 2; i <= n/2; i ++)
     {
          if (n % i == 0)
          {
              printf("%d ",i);
              found = 1;
          }
     }

     if(found == 0)
         printf("Sorry! No factors found!");

}
