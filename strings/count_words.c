#include <stdio.h>

void main()
{
   char st[50];
   int count = 0, i;


      printf("Enter string :");
      gets(st);

      for(i=0; st[i] != '\0'; i++)
      {
          if (st[i] == ' ')  // isspace(st[i])
               count ++;
      }

      printf("No. of words = %d",count + 1);
}
