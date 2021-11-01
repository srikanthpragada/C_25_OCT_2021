#include <stdio.h>

void main()
{
 int a,b;

   printf("Enter two numbers : ");
   scanf("%d%d", &a, &b);

   if(a > b)
       printf("First number is bigger");
   else
       if(b > a)
          printf("Second number is bigger");
       else
          printf("Both are equal");
}
