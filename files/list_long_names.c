// Display names that are longer than 5 chars

#include <stdio.h>

void main()
{
   FILE * fp;
   char name[20], *p;


      fp = fopen("names.txt","rt");

      if(fp == NULL)
      {
        printf("File cannot be opened. Quitting ...");
        exit(1); // Terminate program with exit code 1
      }

      while(1)
      {
          p = fgets(name,20,fp);  // returns NULL on EOF
          if (p == NULL)
              break;

          if (strlen(name) > 6)    // length + newline char
             printf("%s",name);
      }

      fclose(fp);
}
