#include <stdio.h>

int isprime(int n)
{
    int i;

    for(i = 2; i <= n/2 ; i ++)
    {
      if(n % i == 0)
          return 0;   // not prime
    }

    return 1; // Prime
}


void main()
{
 int i;

   printf("%d\n", isprime(255));
   printf("%d\n", isprime(393931));

   for(i = 101; i < 200; i += 2)
   {
       if (isprime(i))
           printf("%5d ", i);
   }
}
