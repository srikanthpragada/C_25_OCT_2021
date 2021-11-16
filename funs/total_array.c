#include <stdio.h>

int total(int a[10])
{
 int i, total = 0;

    for(i = 0; i < 10; i++)
    {
        total += a[i];
    }

    return total;
}

void main()
{
  int arr1[] = {1,2,3,4,5,6,7,8,9,10};
  int sum;

      sum = total(arr1);
      printf("Total = %d", sum);
}
