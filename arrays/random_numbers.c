// Create array of random numbers

#include <stdio.h>


void main()
{
  int a[20];
  int i;

      srand(time(0));
      for(i = 0; i < 20; i ++)
      {
          a[i] = rand() % 100;
          printf("%5d", a[i]);
      }

      printf("\nEven Numbers : ");

      for(i = 0; i < 20; i ++)
      {
          if(a[i] % 2 == 0)
             printf("%5d", a[i]);
      }
}
