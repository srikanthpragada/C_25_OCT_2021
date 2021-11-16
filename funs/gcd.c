#include <stdio.h>

int gcd(int n1, int n2)
{
    int i,smallest;

    smallest = n1 < n2 ? n1 : n2;

    for(i = smallest / 2; i > 0 ; i --)
    {
      if(n1 % i == 0 && n2 % i == 0)
           return i;
    }
}


void main()
{
   printf("%d\n", gcd(10,20));
   printf("%d\n", gcd(23,40));
   printf("%d\n", gcd(100,125));
}
