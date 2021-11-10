//Accept ten characters from user and display them in inverted case
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  char ch;
  int i;

      printf("Enter chars :");
      for(i = 1;i <= 10; i ++)
      {
          ch = getch();
          if(isupper(ch))
            ch = tolower(ch);
          else
            ch = toupper(ch);

          putch(ch);
      }
}
