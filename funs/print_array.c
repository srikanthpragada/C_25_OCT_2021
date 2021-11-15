#include <stdio.h>

void print_array(int a[10])
{
 int i;

    for(i = 0; i < 10; i++)
    {
      printf("%d ",a[i]);
    }
}

void main()
{
  int arr1[] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[] = {1,2,3,4,5,6,7,8,9,10};

     print_array(arr1);
     printf("\n");
     print_array(arr2);
}
