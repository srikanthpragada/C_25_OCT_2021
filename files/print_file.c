// Display given file with line numbers

#include <stdio.h>

void main(int argc,char * argv[])
{
   FILE * fp;
   char line[100], *p;
   int lineno = 1;

      if (argc < 2)
      {
        printf("Usage : print_file <filename>");
        exit(1);  // exit code
      }

      fp = fopen(argv[1],"rt");

      if(fp == NULL)
      {
        printf("File [%s] cannot be opened. Quitting ...", argv[1]);
        exit(2); // Terminate program with exit code 2
      }

      while(1)
      {
          p = fgets(line,100,fp);  // returns NULL on EOF
          if (p == NULL)
              break;

          printf("%3d: %s",lineno,line);
          lineno ++;
      }

      fclose(fp);
}
