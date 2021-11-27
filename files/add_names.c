#include <stdio.h>

void main()
{
   FILE * fp;
   char name[20];
   int i;

      fp = fopen("names.txt","at");

      if(fp == NULL)
      {
        printf("File cannot be opened in append mode. Quitting ...");
        exit(1); // Terminate program with exit code 1
      }

      for(i=1; i <= 5; i ++)
      {
          printf("Enter name :");
          gets(name);
          fprintf(fp, "%s\n", name);
      }

      fclose(fp);
}
