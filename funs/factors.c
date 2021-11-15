#include <stdio.h>

void factors(int n)
{
 int i;

    for(i=2; i <= n/2; i++)
    {
      if(n % i == 0)
      {
        printf("%d ",i);
      }
    }
}

void main()
{
  factors(25554);
}
