// Create array of of 5 X 5 and fill diagonal and anti-diagonal elements with 1 and other with 0

#include <stdio.h>


void main()
{
  int a[5][5];
  int r, c;

      for(r = 0; r < 5; r ++)
      {
         for(c = 0; c < 5; c ++)
         {
             if(r == c || r + c == 4)
                  a[r][c] = 1;
             else
                  a[r][c] = 0;

             printf("%5d", a[r][c]);
         }
         printf("\n");
      }



}
