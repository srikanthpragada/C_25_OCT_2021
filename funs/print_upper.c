#include <stdio.h>

void print_upper(char st[30])
{
 int i;

    for(i = 0; st[i] != '\0'; i++)
    {
       if (isupper(st[i]))
            putch(st[i]);
    }
}

void main()
{
   char st[] = "AbcXyzPqr";

     print_upper(st);
}
