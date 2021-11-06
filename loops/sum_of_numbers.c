#include <stdio.h>

void main()
{
 int n,sum = 0;

     while(1)
     {
         printf("Enter a number [0 to stop] :");
         scanf("%d",&n);

         if (n == 0)
             break;

         sum += n;
     }

     printf("Sum = %d", sum);

}
