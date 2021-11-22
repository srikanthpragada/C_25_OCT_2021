#include <stdio.h>

void reverse(int num)
{
    printf("%d", num % 10);
    num /= 10;
    if (num > 0)
        reverse(num);
}

void print_reverse(int start)
{
    if(start > 0)
    {
        printf(" %d ", start);
        print_reverse(start - 1);
    }
}

void main()
{
   reverse(125);
   print_reverse(10);
}
