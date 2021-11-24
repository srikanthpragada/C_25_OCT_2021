#include <stdio.h>

void fill_array(int a[], int size)
{
  int i;

      for(i=0; i < size; i ++)
          a[i] = rand() % 100;

}

void print_array(int a[], int size)
{
  int i;

      for(i=0; i < size; i ++)
         printf("%5d", a[i]);

}

void main()
{
  int a[10];
  int b[5];

     srand(time(0));
     fill_array(a, 10);
     print_array(a, 10);
     printf("\n");
     fill_array(b, 5);
     print_array(b, 5);
}
