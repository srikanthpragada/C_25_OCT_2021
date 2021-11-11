// Create array of random numbers and sort using bubble sort

#include <stdio.h>
#include <stdlib.h>
#define  SIZE 10

void main()
{
  int a[SIZE];
  int i,j,k,temp;

      srand(time(0));
      printf("Original Array : ");
      for(i = 0; i < SIZE; i ++)
      {
          a[i] = rand() % 100;
          printf("%5d", a[i]);
      }

      // Bubble sort
      for(i = 1; i < SIZE; i ++)
      {
         for(j = 0;  j < SIZE - i; j ++)
         {
             if (a[j] > a[j+1])
             {
                 temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
             }
         }

         // print after sorting array
         printf("\nAfter round %d : ", i);
         for(k = 0; k < SIZE; k ++)
         {
              printf("%5d", a[k]);
         }

      }


}
