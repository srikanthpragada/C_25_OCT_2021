#include <stdio.h>

void main()
{
  char ch;
  int i, count = 0;


     printf("Enter chars :");

     for(i=1; i <= 10; i ++)
     {
       ch = getche();
       if(isalpha(ch))
          count++;
     }

     printf("\nAlphas = %d", count);
}
