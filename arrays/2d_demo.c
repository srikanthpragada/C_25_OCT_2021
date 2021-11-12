// Create array of of 5 X 5 and fill it with random numbers

#include <stdio.h>


void main()
{
  int a[5][5];
  int r,c;

      srand(time(0));
      for(r = 0; r < 5; r ++)
      {
         for(c = 0; c < 5; c ++)
         {
             a[r][c] = rand() % 100;
             printf("%5d", a[r][c]);
         }
         printf("\n");
      }

}
