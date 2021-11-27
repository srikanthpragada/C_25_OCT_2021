#include <stdio.h>

void main()
{
   FILE * fp;
   int ch;

      fp = fopen("names.txt","rt");

      if(fp == NULL)
      {
        printf("File cannot be opened. Quitting ...");
        exit(1); // Terminate program with exit code 1
      }

      while(1)
      {
         ch = fgetc(fp);
         if(ch == EOF)
             break;

         putch(ch);
      }

      fclose(fp);
}
