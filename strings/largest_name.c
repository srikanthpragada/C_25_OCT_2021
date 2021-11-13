#include <stdio.h>
#include <string.h>

void main()
{
   char name[30], largest[30];
   int  i;


      strcpy(largest, ""); // Empty string

      for(i = 1; i <= 5; i ++)
      {
        printf("Enter name :");
        gets(name);

        if (strcmp(name,largest) > 0)
            strcpy(largest,name);
      }

      puts(largest);
}
