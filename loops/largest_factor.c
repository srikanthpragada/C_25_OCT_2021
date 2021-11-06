#include <stdio.h>

void main()
{
 int i,n, count = 0;

     printf("Enter a number :");
     scanf("%d",&n);

     for(i = n/2; i >= 1; i --)
     {
          if (n % i == 0)
               break;
     }

     printf("Largest factor = %d", i);

}
