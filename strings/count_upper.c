#include <stdio.h>

void main()
{
   char st[30];
   int count = 0, i;


      printf("Enter string :");
      gets(st);

      for(i=0; st[i] != '\0'; i++)
      {
          if (isupper(st[i]))
               count ++;
      }

      printf("No. of uppercase letters = %d",count);
}
