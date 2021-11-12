// Create array of of 5 X 5 and fill it with random numbers

#include <stdio.h>


void main()
{
  int a[10][5];
  int r,c, total;

      srand(time(0));
      for(r = 0; r < 10; r ++)
      {
         total = 0;
         for(c = 0; c < 5; c ++)
         {
             a[r][c] = rand() % 100;
             total += a[r][c];
             printf("%5d", a[r][c]);
         }
         printf("%7.2f\n", total / 5.0);
      }

}
