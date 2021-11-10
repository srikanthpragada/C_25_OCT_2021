// Validate password - it must have atleast 1 uppercase and 1 digit

#include <stdio.h>

void main()
{
  char ch;
  int i,upper = 0, digit = 0;

      printf("Enter password :");
      for(i=1;i<=6;i++)
      {
          ch = getch();
          putch('*');
          if(isupper(ch))
             upper = 1;
          else
            if(isdigit(ch))
              digit = 1;
      }

      if (upper && digit)
        printf("\nValid password");
      else
        printf("\nNot a valid password");
}
