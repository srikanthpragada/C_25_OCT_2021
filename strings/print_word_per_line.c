#include <stdio.h>

void main()
{
   char st[50];
   int count = 0, i;


      printf("Enter string :");
      gets(st);

      for(i=0; st[i] != '\0'; i++)
      {
          if (isspace(st[i]))
              putch('\n');
          else
              putch(st[i]);
      }

}
